//
//  MSError.h
//  AdExpress
//
//  Copyright (c) 2012 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const gMeetSocialErrorDomain;

typedef enum {
    MeetSocialErrorUnknown = -1,
    MeetSocialErrorNoInventory = 0,
    MeetSocialErrorAdUnitWarmingUp = 1,
    MeetSocialErrorNetworkTimedOut = 4,
    MeetSocialErrorServerError = 8,
    MeetSocialErrorAdapterNotFound = 16,
    MeetSocialErrorAdapterInvalid = 17,
    MeetSocialErrorAdapterHasNoInventory = 18,
    MeetSocialErrorUnableToParseJSONAdResponse,
    MeetSocialErrorUnexpectedNetworkResponse,
    MeetSocialErrorHTTPResponseNot200,
    MeetSocialErrorNoNetworkData,
    MeetSocialErrorSDKNotInitialized,
    MeetSocialErrorSDKInitializationInProgress,
    MeetSocialErrorAdRequestTimedOut,
    MeetSocialErrorNoRenderer,
    MeetSocialErrorAdLoadAlreadyInProgress,
    MeetSocialErrorInvalidCustomEventClass,
    MeetSocialErrorJSONSerializationFailed,
    MeetSocialErrorUnableToParseAdResponse,
    MeetSocialErrorConsentDialogAlreadyShowing,
    MeetSocialErrorNoConsentDialogLoaded,
    MeetSocialErrorAdapterFailedToLoadAd,
    MeetSocialErrorFullScreenAdAlreadyOnScreen,
    MeetSocialErrorTooManyRequests,
    MeetSocialErrorFrameWidthNotSetForFlexibleSize,
    MeetSocialErrorFrameHeightNotSetForFlexibleSize,
} MeetSocialErrorCode;

@interface MeetSocialError : NSError

+ (MeetSocialError *)errorWithCode:(MeetSocialErrorCode)code;
+ (MeetSocialError *)errorWithCode:(MeetSocialErrorCode)code errMsg:(NSString *)errMsg;

@end
