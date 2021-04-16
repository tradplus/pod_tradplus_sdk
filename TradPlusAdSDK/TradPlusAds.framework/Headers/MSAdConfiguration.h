//
//  MSAdConfiguration.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSGlobal.h"

@class MSRewardedVideoReward;

enum {
    MSAdTypeUnknown = -1,
    MSAdTypeBanner = 0,
    MSAdTypeInterstitial = 1
};
typedef NSUInteger MSAdType;

extern NSString * const gAdTypeHeaderKey;
extern NSString * const gAdUnitWarmingUpHeaderKey;
extern NSString * const gClickthroughHeaderKey;
extern NSString * const gCreativeIdHeaderKey;
extern NSString * const gCustomSelectorHeaderKey;
extern NSString * const gCustomEventClassNameHeaderKey;
extern NSString * const gCustomEventClassDataHeaderKey;
extern NSString * const gFailUrlHeaderKey;
extern NSString * const gHeightHeaderKey;
extern NSString * const gImpressionTrackerHeaderKey;
extern NSString * const gInterceptLinksHeaderKey;
extern NSString * const gLaunchpageHeaderKey;
extern NSString * const gNativeSDKParametersHeaderKey;
extern NSString * const gNetworkTypeHeaderKey;
extern NSString * const gRefreshTimeHeaderKey;
extern NSString * const gAdTimeoutHeaderKey;
extern NSString * const gScrollableHeaderKey;
extern NSString * const gWidthHeaderKey;
extern NSString * const gDspCreativeIdKey;
extern NSString * const gPrecacheRequiredKey;
extern NSString * const gIsVastVideoPlayerKey;
extern NSString * const gRewardedVideoCurrencyNameHeaderKey;
extern NSString * const gRewardedVideoCurrencyAmountHeaderKey;
extern NSString * const gRewardedVideoCompletionUrlHeaderKey;

extern NSString * const gInterstitialAdTypeHeaderKey;
extern NSString * const gOrientationTypeHeaderKey;

extern NSString * const gAdTypeHtml;
extern NSString * const gAdTypeInterstitial;
extern NSString * const gAdTypeMraid;
extern NSString * const gAdTypeClear;
extern NSString * const gAdTypeNative;
extern NSString * const gAdTypeNativeVideo;

@interface MSAdConfiguration : NSObject

@property (nonatomic, assign) MSAdType adType;
@property (nonatomic, assign) BOOL adUnitWarmingUp;
@property (nonatomic, copy) NSString *networkType;
@property (nonatomic, assign) CGSize preferredSize;
@property (nonatomic, strong) NSURL *clickTrackingURL;
@property (nonatomic, strong) NSURL *impressionTrackingURL;
@property (nonatomic, strong) NSURL *failoverURL;
@property (nonatomic, strong) NSURL *interceptURLPrefix;
@property (nonatomic, assign) BOOL shouldInterceptLinks;
@property (nonatomic, assign) BOOL scrollable;
@property (nonatomic, assign) NSTimeInterval refreshInterval;
@property (nonatomic, assign) NSTimeInterval adTimeoutInterval;
@property (nonatomic, copy) NSData *adResponseData;
@property (nonatomic, strong) NSDictionary *nativeSDKParameters;
@property (nonatomic, copy) NSString *customSelectorName;
@property (nonatomic, assign) Class customEventClass;
@property (nonatomic, strong) NSDictionary *customEventClassData;
@property (nonatomic, assign) MSInterstitialOrientationType orientationType;
@property (nonatomic, copy) NSString *dspCreativeId;
@property (nonatomic, assign) BOOL precacheRequired;
@property (nonatomic, assign) BOOL isVastVideoPlayer;
@property (nonatomic, strong) NSDate *creationTimestamp;
@property (nonatomic, copy) NSString *creativeId;
@property (nonatomic, copy) NSString *headerAdType;
@property (nonatomic, assign) NSInteger nativeVideoPlayVisiblePercent;
@property (nonatomic, assign) NSInteger nativeVideoPauseVisiblePercent;
@property (nonatomic, assign) NSInteger nativeVideoImpressionMinVisiblePercent;
@property (nonatomic, assign) NSTimeInterval nativeVideoImpressionVisible;
@property (nonatomic, assign) NSTimeInterval nativeVideoMaxBufferingTime;
@property (nonatomic) MSRewardedVideoReward *rewardedVideoReward;
@property (nonatomic, copy) NSString *rewardedVideoCompletionUrl;

- (id)initWithHeaders:(NSDictionary *)headers data:(NSData *)data;

- (BOOL)hasPreferredSize;
- (NSString *)adResponseHTMLString;
- (NSString *)clickDetectionURLPrefix;

@end
