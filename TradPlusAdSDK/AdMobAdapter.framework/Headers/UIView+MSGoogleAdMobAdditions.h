#import <UIKit/UIKit.h>

@interface UIView (MSGoogleAdMobAdditions)

/// Adds constraints to the receiver's superview that keep the receiver the same size and position
/// as the superview.
- (void)gad_fillSuperview;

@end
