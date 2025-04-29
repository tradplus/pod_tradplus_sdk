#import <UIKit/UIKit.h>

@protocol TPProgressOverlayViewDelegate;

@interface TPProgressOverlayView : UIView
@property (nonatomic, weak) id<TPProgressOverlayViewDelegate> delegate;

- (instancetype)initWithDelegate:(id<TPProgressOverlayViewDelegate>)delegate;

- (void)show;
- (void)hide;
@end

#pragma mark - TPProgressOverlayViewDelegate

@protocol TPProgressOverlayViewDelegate <NSObject>
@optional
- (void)overlayCancelButtonPressed;
- (void)overlayDidAppear;
@end
