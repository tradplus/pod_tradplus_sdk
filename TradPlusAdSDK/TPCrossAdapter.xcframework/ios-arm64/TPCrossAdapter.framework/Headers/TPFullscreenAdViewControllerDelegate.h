#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPFullscreenAdViewController;
@class TPAdContainerView;

#pragma mark -

@protocol TPFullscreenAdViewControllerAppearanceDelegate <NSObject>

- (void)fullscreenAdWillAppear:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdDidAppear:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdWillDisappear:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdDidDisappear:(id<TPFullscreenAdViewController>)fullscreenAdViewController;

- (void)fullscreenAdWillPresent:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdDidPresent:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdWillDismiss:(id<TPFullscreenAdViewController>)fullscreenAdViewController;
- (void)fullscreenAdDidDismiss:(id<TPFullscreenAdViewController>)fullscreenAdViewController;

@end

NS_ASSUME_NONNULL_END
