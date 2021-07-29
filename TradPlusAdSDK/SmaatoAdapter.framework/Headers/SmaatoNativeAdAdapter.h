//
//  SmaatoNativeAdAdapter.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/7/5.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/MSNativeAdAdapter.h>
#import <TradPlusAds/MSNativeAd.h>
#import <SmaatoSDKNative/SmaatoSDKNative.h>

NS_ASSUME_NONNULL_BEGIN

@interface SmaatoNativeAdAdapter : NSObject<MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly)SMANativeAd *nativeAd;
@property (nonatomic, readonly)SMANativeAdRenderer *renderer;

@property (nonatomic, strong) NSDictionary *properties;
@property (nonatomic, strong) NSURL *defaultActionURL;

- (instancetype)initWithNativeAd:(SMANativeAd *)nativeAd promoBanner:(SMANativeAdRenderer *)renderer;
@end
    
NS_ASSUME_NONNULL_END
