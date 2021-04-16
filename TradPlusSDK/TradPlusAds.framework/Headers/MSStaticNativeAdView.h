#import <UIKit/UIKit.h>
#import "MSNativeAdRendering.h"

@interface MSStaticNativeAdView : UIView <MSNativeAdRendering>

@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UILabel *subtitleLabel;
@property (strong, nonatomic) UILabel *mainTextLabel;
@property (strong, nonatomic) UIImageView *iconImageView;
@property (strong, nonatomic) UIImageView *mainImageView;
@property (strong, nonatomic) UIImageView *privacyInformationIconImageView;
@property (strong, nonatomic) UILabel *ctaLabel;
@property (strong, nonatomic) NSArray *arrPosition;

@end
