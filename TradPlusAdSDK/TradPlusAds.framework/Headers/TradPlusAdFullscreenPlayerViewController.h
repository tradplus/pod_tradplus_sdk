#import <UIKit/UIKit.h>

@class TradPlusAdPlayerViewController;
@class TradPlusAdPlayerView;
@class TradPlusAdFullscreenPlayerViewController;

@protocol TradPlusAdFullscreenPlayerViewControllerDelegate <NSObject>

- (void)playerDidProgressToTime:(NSTimeInterval)playbackTime;
- (void)ctaTapped:(TradPlusAdFullscreenPlayerViewController *)viewController;
- (void)fullscreenPlayerWillLeaveApplication:(TradPlusAdFullscreenPlayerViewController *)viewController;

@end

typedef void (^TradPlusAdFullScreenPlayerViewControllerDismissBlock)(UIView *originalParentView);

@interface TradPlusAdFullscreenPlayerViewController : UIViewController

@property (nonatomic) TradPlusAdPlayerView *playerView;

@property (nonatomic, weak) id<TradPlusAdFullscreenPlayerViewControllerDelegate> delegate;

- (instancetype)initWithVideoPlayer:(TradPlusAdPlayerViewController *)playerController dismissBlock:(TradPlusAdFullScreenPlayerViewControllerDismissBlock)dismiss;

@end
