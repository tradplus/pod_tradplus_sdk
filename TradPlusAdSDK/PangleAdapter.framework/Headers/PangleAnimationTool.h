#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
typedef void (^BUDAnimationCompletion)(void);
NS_ASSUME_NONNULL_BEGIN

@interface PangleAnimationTool : NSObject
@property (nonatomic, strong, nullable) UIViewController *splashContainerVC;

+ (instancetype)sharedInstance;
- (void)transitionFromView:(UIView *)fromView toView:(BUSplashZoomOutView *)toView splashCompletion:(BUDAnimationCompletion)splashCompletion;
@end

NS_ASSUME_NONNULL_END
