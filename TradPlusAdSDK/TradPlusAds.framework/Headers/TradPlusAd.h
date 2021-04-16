#import "MSConstants.h"

#if __has_include("MSStaticNativeAdView.h")
#import "MSStaticNativeAdView.h"
#endif

#if __has_include("MSVideoNativeAdView.h")
#import "MSVideoNativeAdView.h"
#endif

#import "MSAdConversionTracker.h"
#import "MSAdView.h"
#import "MSBannerCustomEvent.h"
#import "MSBannerCustomEventDelegate.h"
#import "MSInterstitialAdController.h"
#import "MSInterstitialCustomEvent.h"
#import "MSInterstitialCustomEventDelegate.h"
#import "MSMediationSettingsProtocol.h"
#import "MSRewardedVideo.h"
#import "MSRewardedVideoReward.h"
#import "MSRewardedVideoCustomEvent.h"
#import "MSRewardedVideoError.h"

#if MS_HAS_NATIVE_PACKAGE
#import "MSNativeAd.h"
#import "MSNativeAdAdapter.h"
#import "MSNativeAdConstants.h"
#import "MSNativeCustomEvent.h"
#import "MSNativeCustomEventDelegate.h"
#import "MSNativeAdError.h"
#import "MSNativeAdRendering.h"
#import "MSNativeAdRequest.h"
#import "MSNativeAdRequestTargeting.h"
#import "MSCollectionViewAdPlacer.h"
#import "MSTableViewAdPlacer.h"
#import "MSClientAdPositioning.h"
#import "MSServerAdPositioning.h"
#import "MSNativeAdDelegate.h"
#import "MSStaticNativeAdRendererSettings.h"
#import "MSNativeAdRendererConfiguration.h"
#import "MSNativeAdRendererSettings.h"
#import "MSNativeAdRenderer.h"
#import "MSStaticNativeAdRenderer.h"
#import "TradPlusAdNativeVideoAdRendererSettings.h"
#import "TradPlusAdNativeVideoAdRenderer.h"
#import "MSNativeAdRenderingImageLoader.h"
#endif

// Import these frameworks for module support.
#import <AdSupport/AdSupport.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MessageUI/MessageUI.h>
#import <QuartzCore/QuartzCore.h>
#import <StoreKit/StoreKit.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <UIKit/UIKit.h>

#define TradPlusAdKit [TradPlusAd sharedInstance]

@interface TradPlusAd : NSObject

/**
 * Returns the TradPlusAd singleton object.
 *
 * @return The TradPlusAd singleton object.
 */
+ (TradPlusAd *)sharedInstance;

/**
 * A Boolean value indicating whether the TradPlusAd SDK should use Core Location APIs to automatically
 * derive targeting information for location-based ads.
 *
 * When set to NO, the SDK will not attempt to determine device location. When set to YES, the
 * SDK will periodically try to listen for location updates in order to request location-based ads.
 * This only occurs if location services are enabled and the user has already authorized the use
 * of location services for the application. The default value is YES.
 *
 * @param enabled A Boolean value indicating whether the SDK should listen for location updates.
 */
@property (nonatomic, assign) BOOL locationUpdatesEnabled;


/**
 * A Boolean value indicating whether the TradPlusAd SDK should create a TradPlusAd ID that can be used
 * for frequency capping when Limit ad tracking is on & the IDFA we get is
 * 00000000-0000-0000-0000-000000000000.
 *
 * When set to NO, the SDK will not create a TradPlusAd ID in the above case. When set to YES, the
 * SDK will generate a TradPlusAd ID. The default value is YES.
 *
 */
@property (nonatomic) BOOL frequencyCappingIdUsageEnabled;

/** @name Rewarded Video */
/**
 * Initializes the rewarded video system.
 *
 * This method should only be called once. It should also be called prior to requesting any rewarded video ads.
 * Once the global mediation settings and delegate are set, they cannot be changed.
 *
 * @param globalMediationSettings Global configurations for all rewarded video ad networks your app supports.
 *
 * @param delegate The delegate that will receive all events related to rewarded video.
 */
- (void)initializeRewardedVideoWithGlobalMediationSettings:(NSArray *)globalMediationSettings delegate:(id<MSRewardedVideoDelegate>)delegate;

/**
 * Retrieves the global mediation settings for a given class type.
*
 * @param aClass The type of mediation settings object you want to receive from the collection.
 */
- (id<MSMediationSettingsProtocol>)globalMediationSettingsForClass:(Class)aClass;

- (void)start;
- (NSString *)version;
- (NSString *)bundleIdentifier;

@end
