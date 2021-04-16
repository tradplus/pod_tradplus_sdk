//
//  MSNativeAdError.h
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum MSNativeAdErrorCode {
    MSNativeAdErrorUnknown = -1,

    MSNativeAdErrorHTTPError = -1000,
    MSNativeAdErrorInvalidServerResponse = -1001,
    MSNativeAdErrorNoInventory = -1002,
    MSNativeAdErrorImageDownloadFailed = -1003,
    MSNativeAdErrorAdUnitWarmingUp = -1004,
    MSNativeAdErrorVASTParsingFailed = -1005,
    MSNativeAdErrorVideoConfigInvalid = -1006,

    MSNativeAdErrorContentDisplayError = -1100,
    MSNativeAdErrorRenderError = -1200
} MSNativeAdErrorCode;

extern NSString * const TradPlusAdNativeAdsSDKDomain;

NSError *MSNativeAdNSErrorForInvalidAdServerResponse(NSString *reason);
NSError *MSNativeAdNSErrorForAdUnitWarmingUp();
NSError *MSNativeAdNSErrorForNoInventory();
NSError *MSNativeAdNSErrorForNetworkConnectionError();
NSError *MSNativeAdNSErrorForInvalidImageURL();
NSError *MSNativeAdNSErrorForImageDownloadFailure();
NSError *MSNativeAdNSErrorForContentDisplayErrorMissingRootController();
NSError *MSNativeAdNSErrorForContentDisplayErrorInvalidURL();
NSError *MSNativeAdNSErrorForVASTParsingFailure();
NSError *MSNativeAdNSErrorForVideoConfigInvalid();
NSError *MSNativeAdNSErrorForRenderValueTypeError();
