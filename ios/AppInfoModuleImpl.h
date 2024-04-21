#import <Foundation/Foundation.h>

@interface AppInfoModuleImpl : NSObject

- (NSString *)getAppBuildNumber;
- (NSString *)getAppBundleId;
- (NSString *)getAppVersion;

@end
