#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import "TradPlusCSJRewardedAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusCSJExpressRewardedPlayAgain : NSObject<BUNativeExpressRewardedVideoAdDelegate>

@property (nonatomic,weak) TradPlusCSJRewardedAdapter *rewardedAdapter;
@end

NS_ASSUME_NONNULL_END
