#import <UIKit/UIKit.h>
#import "MSNativeAdRendering.h"

@interface TPNativeBannerTemplate : UIView <MSNativeAdRendering>

@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UIImageView *privacyInformationIconImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *ctaLabel;
@property (weak, nonatomic) IBOutlet UILabel *mainTextLabel;


+ (UINib *)nibForAd;

@end
