
import plistlib
import argparse
import os
import hashlib
import glob

# Tower 6.1 ~ 10.0 Tested
HASH_SALT = "JuD324AiNyS89oTtS10sVyJoUaAgNv1q"

# FNProductLicense.dictionaryRepresentation 固定输出的 11 个 key（运行时验证）
# code, email, expiration_date, license_code, machine, plan, product, revoked, type, user, uuid
# 其中 revoked 为字符串 "false"/"true"，nil 属性用空字符串 "" 填充


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


def generate_product_license(license_dir: str, email: str = "user@tower.com"):
    """
    生成 Product License (license.plist)
    基于 FNProductLicense.dictionaryRepresentation 运行时验证的固定 11 个 key
    """
    config = read_trial_config(license_dir)
    if not config.get("machine") or not config.get("user"):
        print("无法从 trial.plist 读取 machine/user，请确认 trial.plist 存在")
        return False

    # 构造 Product License 字典
    # dictionaryRepresentation 固定输出这 11 个 key，nil 属性用空字符串填充
    license_dict = {
        "email": email,
        "expiration_date": "2099-12-31T23:59:59Z",
        "license_code": "",
        "machine": config["machine"],
        "plan": "pro",
        "product": "tower",
        "revoked": "false",
        "type": "LICENSE",
        "user": config["user"],
        "uuid": "",
    }

    # 计算 code
    license_dict["code"] = generate_code(license_dict)

    # 写入 license.plist
    license_path = os.path.join(license_dir, "license.plist")
    with open(license_path, "wb") as f:
        plistlib.dump(license_dict, f)

    print("[license.plist] 已生成: %s" % license_path)
    print("[license.plist] code = %s" % license_dict["code"])
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

