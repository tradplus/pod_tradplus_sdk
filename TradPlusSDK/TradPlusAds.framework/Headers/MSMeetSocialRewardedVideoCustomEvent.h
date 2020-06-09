//
//  MSMeetSocialRewardedVideoCustomEvent.h
//  MsSDK

//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import "MSRewardedVideoCustomEvent.h"
#import "MSPrivateRewardedVideoCustomEventDelegate.h"

@interface MSMeetSocialRewardedVideoCustomEvent : MSRewardedVideoCustomEvent

@property (nonatomic, weak) id<MSPrivateRewardedVideoCustomEventDelegate> delegate;

@end
