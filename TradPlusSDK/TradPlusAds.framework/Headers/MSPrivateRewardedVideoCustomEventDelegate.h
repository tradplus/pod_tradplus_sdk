#import "MSRewardedVideoCustomEvent.h"

@class MSAdConfiguration;

@protocol MSPrivateRewardedVideoCustomEventDelegate <MSRewardedVideoCustomEventDelegate>

- (NSString *)adUnitId;
- (MSAdConfiguration *)configuration;

@end
