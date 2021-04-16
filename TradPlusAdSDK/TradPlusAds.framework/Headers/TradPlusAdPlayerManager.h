#import <Foundation/Foundation.h>

@class TradPlusAdPlayerViewController;
@class TradPlusAdNativeVideoAdConfigValues;
@class MSVideoConfig;
@class MSAdConfigurationLogEventProperties;

@interface TradPlusAdPlayerManager : NSObject

+ (TradPlusAdPlayerManager *)sharedInstance;
- (void)disposePlayerViewController;

- (TradPlusAdPlayerViewController *)playerViewControllerWithVideoConfig:(MSVideoConfig *)videoConfig nativeVideoAdConfig:(TradPlusAdNativeVideoAdConfigValues *)nativeVideoAdConfig logEventProperties:(MSAdConfigurationLogEventProperties *)logEventProperties;

@end
