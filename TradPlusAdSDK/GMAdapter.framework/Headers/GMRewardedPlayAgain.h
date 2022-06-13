#import <Foundation/Foundation.h>
#import <ABUAdSDK/ABUAdSDK.h>
#import "GMRewardedAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface GMRewardedPlayAgain : NSObject<ABURewardedVideoAdDelegate>

@property (nonatomic,weak) GMRewardedAdapter *rewardedAdapter;
@end

NS_ASSUME_NONNULL_END
