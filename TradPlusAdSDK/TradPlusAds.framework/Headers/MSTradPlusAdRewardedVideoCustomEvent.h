#import "MSRewardedVideoCustomEvent.h"
#import "MSPrivateRewardedVideoCustomEventDelegate.h"

@interface MSTradPlusAdRewardedVideoCustomEvent : MSRewardedVideoCustomEvent

@property (nonatomic, weak) id<MSPrivateRewardedVideoCustomEventDelegate> delegate;

@end
