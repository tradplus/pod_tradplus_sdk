#import <Foundation/Foundation.h>

extern NSString * const gTradPlusAdErrorDomain;

typedef enum {
    TradPlusAdErrorUnknown = -1,
    TradPlusAdErrorNoInventory = 0,
    TradPlusAdErrorAdUnitWarmingUp = 1,
    TradPlusAdErrorNetworkTimedOut = 4,
    TradPlusAdErrorServerError = 8,
    TradPlusAdErrorAdapterNotFound = 16,
    TradPlusAdErrorAdapterInvalid = 17,
    TradPlusAdErrorAdapterHasNoInventory = 18,
    TradPlusAdErrorUnableToParseJSONAdResponse,
    TradPlusAdErrorUnexpectedNetworkResponse,
    TradPlusAdErrorHTTPResponseNot200,
    TradPlusAdErrorNoNetworkData,
    TradPlusAdErrorSDKNotInitialized,
    TradPlusAdErrorSDKInitializationInProgress,
    TradPlusAdErrorAdRequestTimedOut,
    TradPlusAdErrorNoRenderer,
    TradPlusAdErrorAdLoadAlreadyInProgress,
    TradPlusAdErrorInvalidCustomEventClass,
    TradPlusAdErrorJSONSerializationFailed,
    TradPlusAdErrorUnableToParseAdResponse,
    TradPlusAdErrorConsentDialogAlreadyShowing,
    TradPlusAdErrorNoConsentDialogLoaded,
    TradPlusAdErrorAdapterFailedToLoadAd,
    TradPlusAdErrorFullScreenAdAlreadyOnScreen,
    TradPlusAdErrorTooManyRequests,
    TradPlusAdErrorFrameWidthNotSetForFlexibleSize,
    TradPlusAdErrorFrameHeightNotSetForFlexibleSize,
} TradPlusAdErrorCode;

@interface TradPlusAdError : NSError

+ (TradPlusAdError *)errorWithCode:(TradPlusAdErrorCode)code;
+ (TradPlusAdError *)errorWithCode:(TradPlusAdErrorCode)code errMsg:(NSString *)errMsg;

@end
