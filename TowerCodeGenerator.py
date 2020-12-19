
import plistlib
import argparse
import os
import hashlib
# Tower3 6.1 Tested
hashSalt = "JuD324AiNyS89oTtS10sVyJoUaAgNv1q" 

def orgKeyGenerator(plistDict:dict):
    if isinstance(plistDict,dict) == False:
        print('Error Type')
        exit(0)
    expiration_date = plistDict['expiration_date']
    machine = plistDict['machine']
    product = plistDict['product']
    product_version = plistDict['product_version']
    appType = plistDict['type']
    user = plistDict['user']
    argsArray = [expiration_date,machine,product,product_version,appType,user]
    orgKey = ','.join(argsArray) + hashSalt
    return orgKey

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-f", help ="Tower Trail Plist Path")
    args = parser.parse_args()
    if args.f is None:
        print("Trail Path None!")
        exit(0)
    plist_path = args.f
    if (os.path.exists(plist_path) == False):
        print("File Not Exists!")
        exit(0)
    pl = None
    with open(plist_path, 'rb') as fp:
        pl = plistlib.load(fp)
    if pl == None:
        print("Can't Open Plist!")
        exit(0)
    print('file path : %s'%(plist_path))

    # Test HashSalt:
    orgKey = orgKeyGenerator(pl)
    orgCode = pl['code']
    md5_val = hashlib.md5(orgKey.encode('utf8')).hexdigest()
    if md5_val != orgCode:
        print('Hash Salt Unavailable This Version After')
        exit(0)
    # Crack Time
    pl['expiration_date'] = '2099-02-21T23:59:59Z'
    crackKey = orgKeyGenerator(pl)
    crackMd5 = hashlib.md5(crackKey.encode('utf8')).hexdigest()
    pl['code'] = crackMd5
    with open(plist_path, 'wb') as fp:
        plistlib.dump(pl,fp)
    print('🍻 Crack Success! Reopen Tower3 , Enjoy!')

