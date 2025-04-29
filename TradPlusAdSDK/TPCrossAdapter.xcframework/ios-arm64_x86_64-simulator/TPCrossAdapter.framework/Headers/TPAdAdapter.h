#import <Foundation/Foundation.h>
#import "TPAdAdapterDelegate.h"
#import "TPAnalyticsTracker.h"
#import "TPAdConfiguration.h"
#import "TPAdTargeting.h"

@protocol TPAdAdapter <NSObject>

@property (nonatomic, copy) NSString *adUnitId;
@property (nonatomic, readonly) TPAdConfiguration *configuration;
@property (nonatomic, weak) id<TPAdAdapterBaseDelegate> adapterDelegate;
@property (nonatomic, strong) id<TPAnalyticsTracker> analyticsTracker;

- (void)getAdWithConfiguration:(TPAdConfiguration *)configuration targeting:(TPAdTargeting *)targeting;

@optional

#pragma mark - Inline only

@property (nonatomic, strong) UIView * adView;
- (void)didPresentInlineAd;
- (void)rotateToOrientation:(UIInterfaceOrientation)newOrientation;

#pragma mark - Fullscreen only

@property (nonatomic, copy) NSString *customData;

- (void)showFullscreenAdFromViewController:(UIViewController *)viewController;

- (void)expireAdapter;

#pragma mark - Rewarded only

@property (nonatomic, readonly) BOOL hasAdAvailable;

- (void)handleDidPlayAd;

@end
