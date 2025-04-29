//
//  TradPlusBannerRenderer.h
//  TradPlusAds
//
//  Created by xuejun on 2022/10/18.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusAds.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusBannerRenderer : TradPlusNativeRenderer

@property (nonatomic,assign)CGSize adSize;
@property (nonatomic,assign)TPBannerContentMode bannerContentMode;
@end

NS_ASSUME_NONNULL_END
