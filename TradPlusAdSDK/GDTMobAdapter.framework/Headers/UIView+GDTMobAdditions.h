#import <UIKit/UIKit.h>

@interface UIView (GDTMobAdditions)

/// Adds constraints to the receiver's superview that keep the receiver the same size and position
/// as the superview.
- (void)gdt_fillSuperview;

@end
