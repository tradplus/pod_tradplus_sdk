#import "TPFullscreenAdViewController.h"
//#import "TPCountdownTimerView.h"
#import <TradPlusAds/MSTimer.h>

@class TPImageCreativeView;

NS_ASSUME_NONNULL_BEGIN

@interface TPFullscreenAdViewController (Splash)

//@property (nonatomic, strong) TPCountdownTimerView *countdownTimerView;
- (void)prepareSplashAdWithImageCreativeView:(UIImageView *)imageCreativeView;
- (void)showCountdownView;
@end

NS_ASSUME_NONNULL_END
