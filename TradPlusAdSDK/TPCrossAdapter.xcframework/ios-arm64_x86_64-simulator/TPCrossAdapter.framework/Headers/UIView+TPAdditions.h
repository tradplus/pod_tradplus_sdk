#import <UIKit/UIKit.h>

@interface UIView (TPAdditions)

@property (nonatomic) CGFloat tp_x;
@property (nonatomic) CGFloat tp_y;
@property (nonatomic) CGFloat tp_height;
@property (nonatomic) CGFloat tp_width;

- (void)setMp_x:(CGFloat)tp_x;
- (void)setMp_y:(CGFloat)tp_y;
- (void)setMp_width:(CGFloat)tp_width;
- (void)setMp_height:(CGFloat)tp_height;

- (UIView *)tp_snapshotView;

// convert any UIView to UIImage view. We can apply blur effect on UIImage.
- (UIImage *)tp_snapshot:(BOOL)usePresentationLayer;

@end

@interface UIView (TPSafeArea)

@property(nonatomic,readonly) NSLayoutXAxisAnchor *tp_safeLeadingAnchor;
@property(nonatomic,readonly) NSLayoutXAxisAnchor *tp_safeTrailingAnchor;
@property(nonatomic,readonly) NSLayoutXAxisAnchor *tp_safeLeftAnchor;
@property(nonatomic,readonly) NSLayoutXAxisAnchor *tp_safeRightAnchor;
@property(nonatomic,readonly) NSLayoutYAxisAnchor *tp_safeTopAnchor;
@property(nonatomic,readonly) NSLayoutYAxisAnchor *tp_safeBottomAnchor;
@property(nonatomic,readonly) NSLayoutDimension *tp_safeWidthAnchor;
@property(nonatomic,readonly) NSLayoutDimension *tp_safeHeightAnchor;
@property(nonatomic,readonly) NSLayoutXAxisAnchor *tp_safeCenterXAnchor;
@property(nonatomic,readonly) NSLayoutYAxisAnchor *tp_safeCenterYAnchor;

@end
