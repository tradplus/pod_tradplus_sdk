#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kMintegralErrorDomain;

@interface MintegralAdapterConfiguration : NSObject


+(BOOL)isSDKInitialized;

+(void)sdkInitialized;

+(BOOL)isMute;

+(void)setMute:(BOOL)muteStatus;

+(void)initializeMintegral:(NSDictionary *)info setAppID:(nonnull NSString *)appId appKey:(nonnull NSString *)appKey;

@end

NS_ASSUME_NONNULL_END
