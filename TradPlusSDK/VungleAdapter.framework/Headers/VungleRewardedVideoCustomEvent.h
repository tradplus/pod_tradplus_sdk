//
//  VungleRewardedVideoCustomEvent.h
//  MeetSocialSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#if __has_include(<TradPlusAds/MeetSocial.h>)
#import <TradPlusAds/MeetSocial.h>
#else
    #import <TradPlusAds/MSRewardedVideoCustomEvent.h>
#endif

/*
 * Certified with version 4.0.6 of the Vungle SDK.
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the rewardedVideoWillLeaveApplicationForCustomEvent: delegate method.
 */

@interface VungleRewardedVideoCustomEvent : MSRewardedVideoCustomEvent

@end
