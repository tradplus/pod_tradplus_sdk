
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TradPlusNativeAdRendering <NSObject>

@optional

- (UILabel *)nativeTitleTextLabel;

- (UILabel *)nativeMainTextLabel;

- (UIImageView *)nativeIconImageView;

- (UIImageView *)nativeMainImageView;

- (UIView *)nativeMediaView;

//callToActionTextLabel 优先使用
- (UILabel *)nativeCallToActionTextLabel;
//v9.7.0新增 callToActionView
- (UIView *)nativeCallToActionView;

//AdChoiceImageView 优先使用
- (UIImageView *)nativePrivacyInformationIconImageView;
//v9.7.0新增 AdChoiceView
- (UIView *)nativeAdChoiceView;

+ (UINib *)nibForAd;

//v9.7.0新增 开发者可以在此接口设置可点击view的数组
- (NSArray *)clickViewArray;

@end
