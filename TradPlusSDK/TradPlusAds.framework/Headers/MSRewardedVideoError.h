//
//  MSRewardedVideoError.h
//  MsSDK
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    MSRewardedVideoAdErrorUnknown = -1,

    MSRewardedVideoAdErrorTimeout = -1000,
    MSRewardedVideoAdErrorAdUnitWarmingUp = -1001,
    MSRewardedVideoAdErrorNoAdsAvailable = -1100,
    MSRewardedVideoAdErrorInvalidCustomEvent = -1200,
    MSRewardedVideoAdErrorMismatchingAdTypes = -1300,
    MSRewardedVideoAdErrorAdAlreadyPlayed = -1400,
    MSRewardedVideoAdErrorInvalidAdUnitID = -1500
} MSRewardedVideoErrorCode;

extern NSString * const MeetSocialRewardedVideoAdsSDKDomain;
