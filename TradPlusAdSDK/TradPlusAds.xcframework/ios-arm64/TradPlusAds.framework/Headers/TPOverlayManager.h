//
//  TPOverlayManager.h
//

#import <UIKit/UIKit.h>

@interface TPOverlayManager : NSObject

+ (instancetype)sharedManager;

- (void)showOverlayWithView:(UIView *)contentView;

- (void)dismissOverlay;

@end

