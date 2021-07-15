
#import <UIKit/UIKit.h>
#import <TradPlusAds/MSNativeAdRendering.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPNativeSplashTemplate : UIView <MSNativeAdRendering>

@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UIImageView *mainImageView;
@property (weak, nonatomic) IBOutlet UIImageView *privacyInformationIconImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *ctaLabel;
@property (weak, nonatomic) IBOutlet UILabel *mainTextLabel;

+ (UINib *)nibForAd;

@end

NS_ASSUME_NONNULL_END
