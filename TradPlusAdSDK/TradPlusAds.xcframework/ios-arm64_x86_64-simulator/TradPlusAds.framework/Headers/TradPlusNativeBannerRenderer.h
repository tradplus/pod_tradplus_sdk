//
//  TradPlusNativeBannerRenderer.h
//  TradPlusAds
//
//  Created by xuejun on 2022/10/18.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusNativeRenderer.h>
#import <TradPlusAds/MsCommon.h>

@class TradPlusAdWaterfallItem;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TPNativeBannerSizeType) {
    TPNativeBannerSizeType320x50 = 1,
    TPNativeBannerSizeType320x100 = 2,
    TPNativeBannerSizeType300x250 = 3,
    TPNativeBannerSizeType728x90 = 4,
};

@interface TradPlusNativeBannerRenderer : TradPlusNativeRenderer

@property (nonatomic,assign)TPBannerContentMode bannerContentMode;
@property (nonatomic,assign)TPNativeBannerSizeType nativeBannerSizeType;
@property (nonatomic,assign)BOOL showCloseButton;
/// 原生 Banner 关闭回调（由 TradPlusAdBanner 注入，直接绑定到模版）
@property (nonatomic,copy,nullable) void (^bannerCloseHandler)(void);

- (void)configureWithWaterfallItem:(nullable TradPlusAdWaterfallItem *)item;

- (void)bindTemplateCloseAction:(UIView *)templateView;

/// 将模版关闭按钮提升到容器最上层，避免三方 mediaView 遮挡（全平台通用）
- (void)elevateCloseButtonOnContainer:(UIView *)containerView;

@end

NS_ASSUME_NONNULL_END
