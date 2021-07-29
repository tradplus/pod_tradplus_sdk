//
//  MyTargetNativeAdAdapter.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/7/2.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeAdAdapter.h>
#import <TradPlusAds/MSNativeAd.h>
#import <MyTargetSDK/MyTargetSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface MyTargetNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) MTRGNativeAd *nativeAd;
@property (nonatomic, readonly) MTRGNativeBannerAd *nativeBannerAd;

@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;
@property (nonatomic, assign)BOOL isNativeBanner;

- (instancetype)initWithNativeAd:(MTRGNativeAd *)nativeAd promoBanner:(MTRGNativePromoBanner *)promoBanner;

- (instancetype)initWithNativeBanner:(MTRGNativeBanner *)banner nativeBannerAd:(MTRGNativeBannerAd *)nativeBannerAd;

- (MTRGNativeBanner *)getBanner;
@end

NS_ASSUME_NONNULL_END
