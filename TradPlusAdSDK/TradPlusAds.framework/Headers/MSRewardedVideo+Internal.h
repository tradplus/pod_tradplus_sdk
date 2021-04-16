#import "MSRewardedVideo.h"

@interface MSRewardedVideo (Internal)

+ (MSRewardedVideo *)sharedInstance;
- (void)startRewardedVideoConnectionWithUrl:(NSURL *)url;

@end
