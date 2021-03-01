//
//  main.m
//  TowerCodeFramework
//
//  Created by Sylar on 2021/3/1.
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "TowerHeader.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Base On Tower 6.3(Build 273) Ver License Framework");
        NSString *getUserName =  NSUserName();
        
        //Tower Framework Defalut Path
        NSString *filePath = [NSString stringWithFormat:@"/Users/%@/Library/Application Support/com.fournova.Tower3/ReplacePlistFileNameInThisDir",getUserName];

        
        
        if (![[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
            NSLog(@"Not Exist Path!");
            return 0;
        }
        
        NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithContentsOfFile:filePath];
        if (!dic) {
            NSLog(@"Can't Decode User Info!");
            return 0;
        }
        dic[@"expiration_date"] = @"2099-02-21T23:59:59Z";
        FNTrialLicense *trailLicense = [FNTrialLicense licenseWithValuesFromDictionary:dic];
        
        FNProductConfig *config = [[FNProductConfig alloc]init];
        config.productName = trailLicense.productName;
        config.productVersion = trailLicense.productVersion;
        config.userName = trailLicense.user;
        config.machineUUID = trailLicense.machine;
        config.hashingSalt = @"JuD324AiNyS89oTtS10sVyJoUaAgNv1q";
        
        
        
        FNLicenseHashGenerator *hashGenerator = [[FNLicenseHashGenerator alloc]initWithProductConfig:config];
        NSString *codeStr = [hashGenerator generateHashForLicense:trailLicense];
        
        dic[@"code"] = codeStr;
        
        
        BOOL writeSuccess = [dic writeToFile:filePath atomically:YES];
        if (writeSuccess) {
            NSLog(@"🍻 Crack Success! Reopen Tower3 , Enjoy!");
        }else{
            NSLog(@"⚠️ Can't Crack Tower3");
        }

        
    }
    return 0;
}
