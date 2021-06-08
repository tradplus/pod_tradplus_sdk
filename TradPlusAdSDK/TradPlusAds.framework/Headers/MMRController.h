#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "MMRConstants.h"
#import "MSMRAIDInterstitialViewController.h"

@protocol MMRControllerDelegate;
@class MSAdConfiguration;
@interface MMRController : NSObject

@property (nonatomic, weak) id<MMRControllerDelegate> delegate;

- (instancetype)initWithAdViewFrame:(CGRect)adViewFrame adPlacementType:(MMRAdViewPlacementType)placementType;

- (void)loadAdWithConfiguration:(MSAdConfiguration *)configuration;
- (void)handleMRAIDInterstitialDidPresentWithViewController:(MSMRAIDInterstitialViewController *)viewController;
- (void)enableRequestHandling;
- (void)disableRequestHandling;

@end

/**
 * The `MMRControllerDelegate` will relay specific events such as ad loading to
 * the object that implements the delegate. It also requires information
 * such as adUnitId, adConfiguation, and location in order to use its
 * ad alert manager.
 **/
@protocol MMRControllerDelegate <NSObject>

@required

- (NSString *)adUnitId;
- (MSAdConfiguration *)adConfiguration;

// Retrieves the view controller from which modal views should be presented.
- (UIViewController *)viewControllerForPresentingModalView;

// Called when the ad is about to display modal content (thus taking over the screen).
- (void)appShouldSuspendForAd:(UIView *)adView;

// Called when the ad has dismissed any modal content (removing any on-screen takeovers).
- (void)appShouldResumeFromAd:(UIView *)adView;

@optional

// Called when the ad loads successfully.
- (void)adDidLoad:(UIView *)adView;

// Called when the ad fails to load.
- (void)adDidFailToLoad:(UIView *)adView;

// Called just before the ad closes.
- (void)adWillClose:(UIView *)adView;

// Called just after the ad has closed.
- (void)adDidClose:(UIView *)adView;

// Called after the rewarded video finishes playing
- (void)rewardedVideoEnded;

@end
