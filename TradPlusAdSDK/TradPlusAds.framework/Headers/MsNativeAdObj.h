//
//  MsNativeAdObj.h
//  TradPlusAds
//
//  Created by hy on 2020/6/11.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import "MSNativeAd.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MsNativeAdObjDelegate;

@interface MsNativeAdObj : NSObject

- (void)loadAd:(NSDictionary *)dicStrategy;

@property (nonatomic, strong) Class RenderingViewClass; //高级原生，默认的布局类
@property (nonatomic, strong) Class YDRenderingViewClass; //有道专用
@property (nonatomic, weak, nullable) id<MsNativeAdObjDelegate> delegate;
@property (nonatomic, strong) NSString *channelName;
@property (nonatomic, copy) NSString *placementID;
@property (nonatomic, assign) CGSize sizeNativeView; //模版渲染的原生广告 需要提供尺寸
@property (nonatomic, assign) BOOL isTimeout; 

@end

@protocol MsNativeAdObjDelegate <NSObject>
@optional
- (void)nativeAdObjLoaded:(MSNativeAd *)nativeAd;
- (void)nativeAdObj:(MsNativeAdObj *)nativeAdObj didFailWithError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
