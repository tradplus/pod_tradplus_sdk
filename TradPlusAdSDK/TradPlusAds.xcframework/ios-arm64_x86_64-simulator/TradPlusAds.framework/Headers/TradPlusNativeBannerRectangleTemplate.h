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

/// 无 icon 素材时收起图标列，标题/正文左移（与 320×50 / 320×100 行为一致）
- (void)applyNoIconLayout;

/// 设计稿 ad-meta 关闭按钮区域（模版坐标系）
- (CGRect)closeButtonFrameInBounds;

@end

NS_ASSUME_NONNULL_END
