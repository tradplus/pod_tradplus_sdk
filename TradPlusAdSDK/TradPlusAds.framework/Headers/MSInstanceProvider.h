//
//  MSInstanceProvider.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import "MSGlobal.h"
#import "MSCoreInstanceProvider.h"
#import "MSWebView.h"

// Banners
@class MSBannerAdManager;
@protocol MSBannerAdManagerDelegate;
@class MSBaseBannerAdapter;
@protocol MSBannerAdapterDelegate;
@class MSBannerCustomEvent;
@protocol MSBannerCustomEventDelegate;

// Interstitials
@class MSInterstitialAdManager;
@protocol MSInterstitialAdManagerDelegate;
@class MSBaseInterstitialAdapter;
@protocol MSInterstitialAdapterDelegate;
@class MSInterstitialCustomEvent;
@protocol MSInterstitialCustomEventDelegate;
@class MSHTMLInterstitialViewController;
@class MSMRAIDInterstitialViewController;
@protocol MSInterstitialViewControllerDelegate;

// Rewarded Video
@class MSRewardedVideoAdManager;
@class MSRewardedVideoAdapter;
@class MSRewardedVideoCustomEvent;
@protocol MSRewardedVideoAdapterDelegate;
@protocol MSRewardedVideoCustomEventDelegate;
@protocol MSRewardedVideoAdManagerDelegate;
@class FluteVideoViewController;

// HTML Ads
@class MSWebView;
@class MSAdWebViewAgent;
@protocol MSAdWebViewAgentDelegate;

// MMRAID
@class MMRController;
@protocol MMRControllerDelegate;
@class MSClosableView;
@class MMRBridge;
@protocol MMRBridgeDelegate;
@protocol MSClosableViewDelegate;
@class MMRBundleManager;
@class MMRVideoPlayerManager;
@protocol MMRVideoPlayerManagerDelegate;
@class MPMoviePlayerViewController;
@class MMRNativeCommandHandler;
@protocol MMRNativeCommandHandlerDelegate;

//Native
@protocol MSNativeCustomEventDelegate;
@class MSNativeCustomEvent;
@class MSNativeAdSource;
@protocol MSNativeAdSourceDelegate;
@class MSNativePositionSource;
@class MSStreamAdPlacementData;
@class MSStreamAdPlacer;
@class MSAdPositioning;
@protocol MSNativeAdRenderer;

@interface MSInstanceProvider : NSObject

+(instancetype)sharedProvider;
- (id)singletonForClass:(Class)klass provider:(MSSingletonProviderBlock)provider;
- (id)singletonForClass:(Class)klass provider:(MSSingletonProviderBlock)provider context:(id)context;

#pragma mark - Banners
- (MSBannerAdManager *)buildMPBannerAdManagerWithDelegate:(id<MSBannerAdManagerDelegate>)delegate;
- (MSBaseBannerAdapter *)buildBannerAdapterForConfiguration:(MSAdConfiguration *)configuration
                                                   delegate:(id<MSBannerAdapterDelegate>)delegate;
- (MSBannerCustomEvent *)buildBannerCustomEventFromCustomClass:(Class)customClass
                                                      delegate:(id<MSBannerCustomEventDelegate>)delegate;

#pragma mark - Interstitials
- (MSInterstitialAdManager *)buildMPInterstitialAdManagerWithDelegate:(id<MSInterstitialAdManagerDelegate>)delegate;
- (MSBaseInterstitialAdapter *)buildInterstitialAdapterForConfiguration:(MSAdConfiguration *)configuration
                                                               delegate:(id<MSInterstitialAdapterDelegate>)delegate;
- (MSInterstitialCustomEvent *)buildInterstitialCustomEventFromCustomClass:(Class)customClass
                                                                  delegate:(id<MSInterstitialCustomEventDelegate>)delegate;
- (MSHTMLInterstitialViewController *)buildMPHTMLInterstitialViewControllerWithDelegate:(id<MSInterstitialViewControllerDelegate>)delegate
                                                                        orientationType:(MSInterstitialOrientationType)type;
- (MSMRAIDInterstitialViewController *)buildMPMRAIDInterstitialViewControllerWithDelegate:(id<MSInterstitialViewControllerDelegate>)delegate
                                                                            configuration:(MSAdConfiguration *)configuration;
- (FluteVideoViewController *)buildFluteInterstitialViewControllerWithDelegate:(id<MSInterstitialViewControllerDelegate>)delegate
                                                                 configuration:(MSAdConfiguration *)configuration;

#pragma mark - Rewarded Video
- (MSRewardedVideoAdManager *)buildRewardedVideoAdManagerWithAdUnitID:(NSString *)adUnitID delegate:(id<MSRewardedVideoAdManagerDelegate>)delegate;
- (MSRewardedVideoAdapter *)buildRewardedVideoAdapterWithDelegate:(id<MSRewardedVideoAdapterDelegate>)delegate;
- (MSRewardedVideoCustomEvent *)buildRewardedVideoCustomEventFromCustomClass:(Class)customClass delegate:(id<MSRewardedVideoCustomEventDelegate>)delegate;


#pragma mark - HTML Ads
- (MSWebView *)buildMPAdWebViewWithFrame:(CGRect)frame
                                  delegate:(id<MSWebViewDelegate>)delegate;
- (MSAdWebViewAgent *)buildMPAdWebViewAgentWithAdWebViewFrame:(CGRect)frame
                                                     delegate:(id<MSAdWebViewAgentDelegate>)delegate;

#pragma mark - MMRAID
- (MSClosableView *)buildMRAIDMPClosableViewWithFrame:(CGRect)frame webView:(MSWebView *)webView delegate:(id<MSClosableViewDelegate>)delegate;
- (MMRBundleManager *)buildMRBundleManager;
- (MMRController *)buildBannerMRControllerWithFrame:(CGRect)frame delegate:(id<MMRControllerDelegate>)delegate;
- (MMRController *)buildInterstitialMRControllerWithFrame:(CGRect)frame delegate:(id<MMRControllerDelegate>)delegate;
- (MMRBridge *)buildMRBridgeWithWebView:(MSWebView *)webView delegate:(id<MMRBridgeDelegate>)delegate;
- (MMRVideoPlayerManager *)buildMRVideoPlayerManagerWithDelegate:(id<MMRVideoPlayerManagerDelegate>)delegate;
- (MPMoviePlayerViewController *)buildMPMoviePlayerViewControllerWithURL:(NSURL *)URL;
- (MMRNativeCommandHandler *)buildMRNativeCommandHandlerWithDelegate:(id<MMRNativeCommandHandlerDelegate>)delegate;

#pragma mark - Native

- (MSNativeCustomEvent *)buildNativeCustomEventFromCustomClass:(Class)customClass
                                                      delegate:(id<MSNativeCustomEventDelegate>)delegate;
- (MSNativeAdSource *)buildNativeAdSourceWithDelegate:(id<MSNativeAdSourceDelegate>)delegate;
- (MSNativePositionSource *)buildNativePositioningSource;
- (MSStreamAdPlacementData *)buildStreamAdPlacementDataWithPositioning:(MSAdPositioning *)positioning;
- (MSStreamAdPlacer *)buildStreamAdPlacerWithViewController:(UIViewController *)controller adPositioning:(MSAdPositioning *)positioning rendererConfigurations:(NSArray *)rendererConfigurations;

@end
