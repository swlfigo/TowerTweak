
import plistlib
import argparse
import os
import hashlib
import glob

# Tower 6.1 ~ 17.1 Tested
# salt 自 6.1 至 17.1 未变；17.x 中它由 HashingSalt.hashingSalt 运行时字符串数组拼接（反搜索混淆）
HASH_SALT = "JuD324AiNyS89oTtS10sVyJoUaAgNv1q"

# ── Tower 17.1 逆向核实的 FNProductLicense.dictionaryRepresentation 精确 key 集 ──
# 由 IDA 反编译 FNLicensing.framework 得到（key = FNLicenseKey* 常量的真实字符串值）：
#   FNAbstractLicense: product / user / machine / type / code
#   FNProductLicense : uuid(identifier) / license_code(masked) / email /
#                      expiration_date(expires) / revoked("true"/"false") /
#                      plan / plan_features(features 数组) / plan_uuid(planIdentifier)
# 验证 = -[FNLicenseValidator validateProductLicense:]：generateHashForLicense == code（FNEqualStrings）
# 算号 = hashSourceForDictionary：过滤 "code" → 排序 → 取值(user→config.userName、
#        machine→config.machineUUID、数组排序后逗号连接) → 逗号连接 + salt → MD5
# 注：本机 config.userName / machineUUID 恰为 trial.plist 中的 user / machine 值，故直接用其字面值即可。


def generate_code(plist_dict: dict) -> str:
    """
    通用算号算法，匹配 FNLicenseHashGenerator.hashSourceForDictionary: 逻辑
    适用于 trial.plist 和 license.plist

    算法步骤:
    1. 获取所有 key，过滤掉 "code"
    2. 按字母序排序
    3. 对 "user"/"machine" 使用字典原值（plist 中已是本机值）
       对 Array 类型值排序后逗号连接
    4. 所有值逗号连接，拼接 salt，取 MD5
    """
    keys = sorted(k for k in plist_dict.keys() if k != "code")
    values = []
    for k in keys:
        v = plist_dict[k]
        if isinstance(v, list):
            values.append(",".join(sorted(str(i) for i in v)))
        elif isinstance(v, bool):
            values.append("true" if v else "false")
        else:
            values.append(str(v))
    hash_source = ",".join(values)
    return hashlib.md5((hash_source + HASH_SALT).encode("utf-8")).hexdigest()


def find_license_dir() -> str:
    """自动查找 Tower 许可证目录（包含 machineUUID 子目录）"""
    base = os.path.expanduser(
        "~/Library/Application Support/com.fournova.Tower3"
    )
    for name in os.listdir(base):
        sub = os.path.join(base, name)
        if os.path.isdir(sub) and len(name) == 32:
            return sub
    return ""


def find_plist_paths() -> list:
    """自动查找 Tower 许可证目录下的 trial.plist 和 license.plist"""
    base = os.path.expanduser(
        "~/Library/Application Support/com.fournova.Tower3"
    )
    results = []
    for name in ("trial.plist", "license.plist"):
        results.extend(glob.glob(os.path.join(base, "*", name)))
    return results


def read_trial_config(license_dir: str) -> dict:
    """从已有的 trial.plist 中读取 machine 和 user"""
    trial_path = os.path.join(license_dir, "trial.plist")
    if not os.path.exists(trial_path):
        return {}
    with open(trial_path, "rb") as f:
        pl = plistlib.load(f)
    return {"machine": pl.get("machine", ""), "user": pl.get("user", "")}


# 正式 Pro license 的功能集。Tower 17.x 正式 license 模式下按 plan_features 限制功能，
# trial 模式则不做功能检查（全解锁）。plan_features 的具体 feature id 需在未打补丁的
# 二进制上实测确认；留空数组即“无附加功能”。若只求全解锁，优先用 trial 路径（--patch-trial）。
DEFAULT_PLAN_FEATURES = []  # 例如 ["pull_requests", "git_lfs", ...]，实测后填入


def generate_product_license(license_dir: str, email: str = "user@tower.com",
                             plan: str = "pro", plan_features=None):
    """
    生成 Tower 17.1 正式 Product License (license.plist)

    key 集与 -[FNProductLicense dictionaryRepresentation]（17.1 逆向核实）严格对齐：
      product / user / machine / type / uuid / license_code / email /
      expiration_date / revoked / plan / plan_features / plan_uuid / code
    """
    config = read_trial_config(license_dir)
    if not config.get("machine") or not config.get("user"):
        print("无法从 trial.plist 读取 machine/user，请确认 trial.plist 存在")
        return False

    if plan_features is None:
        plan_features = DEFAULT_PLAN_FEATURES

    # 全部 key 均赋非空值，确保 dictionaryRepresentation 会输出它们（可选属性 nil 时不入字典，
    # 会导致算号 key 集不一致）。user/machine 的字面值在算号时会被 config 值覆盖，但必须存在。
    license_dict = {
        "product": "tower",
        "user": config["user"],
        "machine": config["machine"],
        "type": "LICENSE",
        "uuid": "00000000-0000-0000-0000-000000000001",       # identifier
        "license_code": "TOWER-PRO-0000-0000-0000-0000",       # masked
        "email": email,
        "expiration_date": "2099-12-31T23:59:59Z",             # expires（字符串）
        "revoked": "false",
        "plan": plan,
        "plan_features": list(plan_features),                  # features 数组
        "plan_uuid": "00000000-0000-0000-0000-0000000000pro"[:36],  # planIdentifier
    }

    # 计算 code（算号会自动:过滤 code、排序、数组逗号连接、拼 salt、MD5）
    license_dict["code"] = generate_code(license_dict)

    license_path = os.path.join(license_dir, "license.plist")
    with open(license_path, "wb") as f:
        plistlib.dump(license_dict, f)

    print("[license.plist] 已生成: %s" % license_path)
    print("[license.plist] plan=%s  features=%s" % (plan, plan_features))
    print("[license.plist] code = %s" % license_dict["code"])
    print("提示: 若功能未全解锁，改用 trial 路径(全解锁)或在 plan_features 填入实测 feature id")
    return True


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Tower License Code Generator (6.1 ~ 10.0)")
    parser.add_argument("-f", help="Tower plist 路径 (trial.plist 或 license.plist)，不指定则自动查找")
    parser.add_argument("--gen-license", action="store_true",
                        help="生成正式订阅许可证 (license.plist)，替代试用状态")
    parser.add_argument("--email", default="user@tower.com",
                        help="正式许可证的邮箱 (默认: user@tower.com)")
    args = parser.parse_args()

    # 模式一：生成 Product License
    if args.gen_license:
        license_dir = find_license_dir()
        if not license_dir:
            print("未找到 Tower 许可证目录")
            exit(1)
        print("许可证目录: %s" % license_dir)
        if generate_product_license(license_dir, args.email):
            print("Done! Reopen Tower, Enjoy!")
        exit(0)

    # 模式二：修改现有 Trial 过期时间（原有逻辑）
    if args.f:
        plist_paths = [args.f]
    else:
        plist_paths = find_plist_paths()
        if not plist_paths:
            print("未找到 Tower 许可证文件，请用 -f 指定路径")
            exit(1)
        print("自动发现 %d 个许可证文件:" % len(plist_paths))
        for p in plist_paths:
            print("  %s" % p)
        print()

    for plist_path in plist_paths:
        if not os.path.exists(plist_path):
            print("[%s] 文件不存在!" % plist_path)
            continue

        with open(plist_path, "rb") as fp:
            pl = plistlib.load(fp)

        if not isinstance(pl, dict):
            print("[%s] 无法解析 plist!" % plist_path)
            continue

        filename = os.path.basename(plist_path)
        license_type = pl.get("type", "UNKNOWN")
        print("[%s] type=%s" % (filename, license_type))

        # 验证当前 salt 是否适用
        org_code = pl.get("code", "")
        calc_code = generate_code(pl)
        if calc_code != org_code:
            print("[%s] Hash Salt 不适用此版本 (期望 %s, 计算 %s)" % (filename, org_code, calc_code))
            continue

        print("[%s] Salt 验证通过" % filename)

        # 修改过期时间并重算 code
        pl["expiration_date"] = "2099-02-21T23:59:59Z"
        pl["code"] = generate_code(pl)

        with open(plist_path, "wb") as fp:
            plistlib.dump(pl, fp)

        print("[%s] Done! Reopen Tower, Enjoy!" % filename)
        print()

