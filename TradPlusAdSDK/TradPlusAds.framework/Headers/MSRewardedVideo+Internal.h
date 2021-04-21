//
//  MSRewardedVideo+Internal.h
//  MsSDK
//  Copyright © 2016 MeetSocial. All rights reserved.
//

#import "MSRewardedVideo.h"

@interface MSRewardedVideo (Internal)

+ (MSRewardedVideo *)sharedInstance;
- (void)startRewardedVideoConnectionWithUrl:(NSURL *)url;

@end
