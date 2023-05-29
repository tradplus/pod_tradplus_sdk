#import <UIKit/UIKit.h>
#import "TPAdViewConstant.h"
#import "TPAdContainerView.h"
#import "TPClickThroughView.h"
#import "TPImageLoader.h"
#import "TPFullscreenAdViewControllerDelegate.h"

@class TPCreativeExperienceSettings;

typedef NS_OPTIONS(NSUInteger, TPFullscreenAdInterruption) {
    /*
     No interruption.
     */
    TPFullscreenAdInterruptionNone          = 0,

    /*
     The ad was interrupted due to the user clicking through.
     */
    TPFullscreenAdInterruptionClickthrough  = 1 << 0,

    /*
     The ad was interrupted due to the user backgrounding the application.
     */
    TPFullscreenAdInterruptionBackground    = 1 << 1,

    /*
     The ad was interrupted due to the audio session being interrupted,
     for example by background audio or a phone call. This only applies
     in the case of VAST ads.
     */
    TPFullscreenAdInterruptionAudio         = 1 << 2
};

NS_ASSUME_NONNULL_BEGIN

@protocol TPFullscreenAdViewController <NSObject>
@end

@interface TPFullscreenAdViewController : UIViewController <TPFullscreenAdViewController, TPClickThroughViewDelegate>

@property (nonatomic, weak) id<TPFullscreenAdViewControllerAppearanceDelegate> appearanceDelegate;
@property (nonatomic, weak) id<TPAdContainerViewDelegate> containerDelegate;

- (instancetype)initWithAdContentType:(TPAdContentType)adContentType;

- (void)presentFromViewController:(UIViewController *)viewController complete:(void(^)(NSError * _Nullable))complete;

- (void)dismiss;

- (void)showCloseButton;

/*
 Call when an interruption begins.
 */
- (void)startInterruption:(TPFullscreenAdInterruption)interruption;

/*
 Call when an interruption ends.
 */
- (void)endInterruption:(TPFullscreenAdInterruption)interruption;

@end

#pragma mark -

@interface TPFullscreenAdViewController (TPAdContainerViewDelegate) <TPAdContainerViewDelegate>
@end

NS_ASSUME_NONNULL_END
