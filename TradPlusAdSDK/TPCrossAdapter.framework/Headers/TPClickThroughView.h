#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol TPClickThroughViewDelegate <NSObject>
@optional
- (void)tpClickThroughViewClick;

@end

@interface TPClickThroughView : UIView
@property (nonatomic, strong) UIImageView *iconImageView;
@property (nonatomic, strong) UIButton *ctaButton;
@property (nonatomic, strong) UILabel *lblTitle;
@property (nonatomic, strong) UILabel *lblDesc;

@property (nonatomic, weak, nullable) id<TPClickThroughViewDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
