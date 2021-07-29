//  原生／高级原生广告
//  MsNativeAdsLoaderController.h
//  AdExpress
//
//  Created by tx on 16/8/30.
//  Copyright © 2016年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol MsNativeAdsLoaderDelegate;

@interface MsNativeAdsLoader : NSObject

@property (nonatomic, strong) Class defaultRenderingViewClass; //高级原生，默认的布局类
@property (nonatomic, strong) Class YDRenderingViewClass; //有道专用 布局类
@property (nonatomic, weak, nullable) id<MsNativeAdsLoaderDelegate> delegate;
@property (nonatomic) BOOL isLoading;
@property (nonatomic, assign) NSTimeInterval timeoutInterval; //超时秒数，默认10
//流量分组
@property (nonatomic, strong) NSString *segmentTag; //TradPlus后台 中介组 tag
@property (nonatomic, strong) NSDictionary *dicCustomValue;
@property (nonatomic, assign) CGSize sizeNativeView; //模版渲染的原生广告 需要提供尺寸
- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAds:(int)adsCount;

@end

@protocol MsNativeAdsLoaderDelegate <NSObject>
@required
//整个TradPlus广告位加载结束。
- (void)nativeAdsAllLoaded:(BOOL)isAdReady readyAds:(NSArray *)readyAds error:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
