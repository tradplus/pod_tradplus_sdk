#import <UIKit/UIKit.h>

@protocol MSNativeViewDelegate;

@interface MSNativeView : UIView

@property (nonatomic, weak) id<MSNativeViewDelegate> delegate;

@end

@protocol MSNativeViewDelegate <NSObject>

@required

- (void)nativeViewWillMoveToSuperview:(UIView *)superview;

@end
