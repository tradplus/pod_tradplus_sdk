//
//  MSBaseBannerAdapter.h
//  AdExpress
//
//  Copyright 2016 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSAdView.h"

@protocol MSBannerAdapterDelegate;
@class MSAdConfiguration;

@interface MSBaseBannerAdapter : NSObject
{
    id<MSBannerAdapterDelegate> __weak _delegate;
}

@property (nonatomic, weak) id<MSBannerAdapterDelegate> delegate;
//@property (nonatomic, copy) NSURL *impressionTrackingURL;
//@property (nonatomic, copy) NSURL *clickTrackingURL;

- (id)initWithDelegate:(id<MSBannerAdapterDelegate>)delegate;

/*
 * Sets the adapter's delegate to nil.
 */
- (void)unregisterDelegate;

/*
 * -_getAdWithConfiguration creates a strong reference to self before calling
 * -getAdWithConfiguration to prevent the adapter from being prematurely deallocated.
 */
- (void)getAdWithConfiguration:(MSAdConfiguration *)configuration containerSize:(CGSize)size;
- (void)_getAdWithConfiguration:(MSAdConfiguration *)configuration containerSize:(CGSize)size;

- (void)didStopLoading;
- (void)didDisplayAd;

/*
 * Your subclass should implement this method if your native ads vary depending on orientation.
 */
- (void)rotateToOrientation:(UIInterfaceOrientation)newOrientation;

- (void)trackImpression;

- (void)trackClick;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MSBannerAdapterDelegate

@required

- (MSAdView *)banner;
- (id<MSAdViewDelegate>)bannerDelegate;
- (UIViewController *)viewControllerForPresentingModalView;
- (MSNativeAdOrientation)allowedNativeAdsOrientation;
/*
 * These callbacks notify you that the adapter (un)successfully loaded an ad.
 */
- (void)adapter:(MSBaseBannerAdapter *)adapter didFailToLoadAdWithError:(NSError *)error;
- (void)adapter:(MSBaseBannerAdapter *)adapter didFinishLoadingAd:(UIView *)ad;

/*
 * These callbacks notify you that the user interacted (or stopped interacting) with the native ad.
 */
- (void)userActionWillBeginForAdapter:(MSBaseBannerAdapter *)adapter;
- (void)userActionDidFinishForAdapter:(MSBaseBannerAdapter *)adapter;

/*
 * This callback notifies you that user has tapped on an ad which will cause them to leave the
 * current application (e.g. the ad action opens the iTunes store, Mobile Safari, etc).
 */
- (void)userWillLeaveApplicationFromAdapter:(MSBaseBannerAdapter *)adapter;
- (void)adViewDidShownForAdapter:(MSBaseBannerAdapter *)adapter;
- (void)adViewCountdownToZeroForAdapter:(MSBaseBannerAdapter *)adapter;
- (void)adViewCloseForAdapter:(MSBaseBannerAdapter *)adapter;
@end
