//
//  VungleInterstitialCustomEvent.h
//  MeetSocialSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#if __has_include(<MeetSocial/MeetSocial.h>)
#import <MeetSocial/MeetSocial.h>
#else
    #import <TradPlusAds/MSInterstitialCustomEvent.h>
#endif

/*
 * Certified with version 4.0.6 of the Vungle SDK.
 *
 * The Vungle SDK does not provide an "application will leave" callback, thus this custom event
 * will not invoke the interstitialCustomEventWillLeaveApplication: delegate method.
 */

@interface VungleInterstitialCustomEvent : MSInterstitialCustomEvent

@end
