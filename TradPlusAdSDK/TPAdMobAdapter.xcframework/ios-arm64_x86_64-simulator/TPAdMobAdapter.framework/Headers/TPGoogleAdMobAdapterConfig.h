//
//  TPGoogleAdMobAdapterConfig.h
//  AdMobAdapter
//
//  Created by ms-mac on 2020/10/14.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>

@class TradPlusAdWaterfallItem;

NS_ASSUME_NONNULL_BEGIN

@interface TPGoogleAdMobAdapterConfig : NSObject

+ (void)setPrivacy:(NSDictionary *)info;

/// placement_ad_type == 99 表示 AdMob/GAM 内嵌自适应横幅
+ (BOOL)isInlineAdaptiveBannerWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;
+ (CGFloat)inlineAdaptiveBannerWidthWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;
+ (CGFloat)inlineAdaptiveBannerMaxHeightWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;

@end

NS_ASSUME_NONNULL_END
