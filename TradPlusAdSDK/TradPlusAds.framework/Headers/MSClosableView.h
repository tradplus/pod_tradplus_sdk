#import <UIKit/UIKit.h>

enum {
    MSClosableViewCloseButtonLocationTopRight,
    MSClosableViewCloseButtonLocationTopLeft,
    MSClosableViewCloseButtonLocationTopCenter,
    MSClosableViewCloseButtonLocationBottomRight,
    MSClosableViewCloseButtonLocationBottomLeft,
    MSClosableViewCloseButtonLocationBottomCenter,
    MSClosableViewCloseButtonLocationCenter
};
typedef NSInteger MSClosableViewCloseButtonLocation;

enum {
    MSClosableViewCloseButtonTypeNone,
    MSClosableViewCloseButtonTypeTappableWithoutImage,
    MSClosableViewCloseButtonTypeTappableWithImage,
};
typedef NSInteger MSClosableViewCloseButtonType;

CGRect MSClosableViewCustomCloseButtonFrame(CGSize size, MSClosableViewCloseButtonLocation closeButtonLocation);

@protocol MSClosableViewDelegate;

/**
 * `MSClosableView` is composed of a content view and a close button. The close button can
 * be positioned at any corner, the center of top and bottom edges, and the center of the view.
 * The close button can either be a button that is tappable with image, tappable without an image,
 * and completely disabled altogether. Finally, `MSClosableView` keeps track as to whether or not
 * it has been tapped.
 */
@interface MSClosableView : UIView

@property (nonatomic, weak) id<MSClosableViewDelegate> delegate;
@property (nonatomic, assign) MSClosableViewCloseButtonType closeButtonType;
@property (nonatomic, assign) MSClosableViewCloseButtonLocation closeButtonLocation;
@property (nonatomic, readonly) BOOL wasTapped;

- (instancetype)initWithFrame:(CGRect)frame closeButtonType:(MSClosableViewCloseButtonType)closeButtonType;

@end

/**
 * `MSClosableViewDelegate` allows an object that implements `MSClosableViewDelegate` to
 * be notified when the close button of the `MSClosableView` has been tapped.
 */
@protocol MSClosableViewDelegate <NSObject>

- (void)closeButtonPressed:(MSClosableView *)closableView;

@optional

- (void)closableView:(MSClosableView *)closableView didMoveToWindow:(UIWindow *)window;

@end
