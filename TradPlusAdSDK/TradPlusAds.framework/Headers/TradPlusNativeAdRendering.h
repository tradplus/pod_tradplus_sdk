
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TradPlusNativeAdRendering <NSObject>

@optional

- (UILabel *)nativeTitleTextLabel;

- (UILabel *)nativeMainTextLabel;

- (UIImageView *)nativeIconImageView;

- (UIImageView *)nativeMainImageView;

- (UIView *)nativeMediaView;

- (UILabel *)nativeCallToActionTextLabel;

- (UIImageView *)nativePrivacyInformationIconImageView;

+ (UINib *)nibForAd;

@end
