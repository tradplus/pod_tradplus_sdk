
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPNativeSplashAdViewDelegate;

@interface TPNativeSplashAdView : UIView
@property (nonatomic, weak, nullable) id<TPNativeSplashAdViewDelegate> delegate;
@property (nonatomic, assign) BOOL isAdReady;

- (instancetype)initWithPlacementId:(NSString *)placementId frame:(CGRect)frame;
- (void)loadAd;
- (void)showInWindow:(UIWindow *)window;
@end

@protocol TPNativeSplashAdViewDelegate <NSObject>
@required
- (UIViewController *)viewControllerForPresentingModalView;

@optional
- (void)splashAdViewLoaded:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdView:(TPNativeSplashAdView *)splashAdView didFailWithError:(NSError *)error;
- (void)splashAdViewShown:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewClicked:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewSkip:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewDismissed:(TPNativeSplashAdView *)splashAdView;

- (void)splashAdViewBidStart:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewBidEnd:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewLoadStart:(TPNativeSplashAdView *)splashAdView;
- (void)splashAdViewAllLoaded:(TPNativeSplashAdView *)splashAdView;
@end

NS_ASSUME_NONNULL_END
