//
//  TradPlusNativeBannerRectangleTemplate.h
//  TradPlusAds
//

#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusNativeAdRendering.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusNativeBannerRectangleTemplate : UIView <TradPlusNativeAdRendering>

@property (nonatomic, copy, nullable) void (^closeAct)(void);

- (void)applyCloseButtonVisible:(BOOL)visible;

/// 设计稿 ad-meta 关闭按钮区域（模版坐标系）
- (CGRect)closeButtonFrameInBounds;

@end

NS_ASSUME_NONNULL_END
