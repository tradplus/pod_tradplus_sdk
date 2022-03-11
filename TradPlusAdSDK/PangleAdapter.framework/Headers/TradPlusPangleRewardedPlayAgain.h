#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import "TradPlusPangleRewardedAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusPangleRewardedPlayAgain : NSObject<BURewardedVideoAdDelegate>

@property (nonatomic,weak) TradPlusPangleRewardedAdapter *rewardedAdapter;
@end

NS_ASSUME_NONNULL_END
