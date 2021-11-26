#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TradPlusFyberAdapterError) {
    TradPlusFyberAdapterErrorUnknown = 1,
    TradPlusFyberAdapterErrorMissingAppID,
    TradPlusFyberAdapterErrorSDKInit,
    TradPlusFyberAdapterErrorInternal,
};

extern NSString * const kTradPlusFyberAdapterAppIDKey;
extern NSString * const kTradPlusFyberAdapterErrorDomain;

extern NSNotificationName _Nonnull kFyberInitCompleteNotification;

@interface TradPlusFyberAdapterConfig : NSObject
+ (TradPlusFyberAdapterConfig *)sharedInstance;

- (void)initFyberSDKWithInfo:(NSDictionary *)info;

- (void)collectConsentStatus;

@end

NS_ASSUME_NONNULL_END
