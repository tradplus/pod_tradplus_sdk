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

@property (nonatomic, strong) Class renderingViewClass; //自定义布局时提供布局类，如果自行渲染不用设置。素材在nativeAd.property属性里
@property (nonatomic, weak, nullable) id<MsNativeAdsLoaderDelegate> delegate;
@property (nonatomic) BOOL isLoading;
- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAds:(int)adsCount;

@end

@protocol MsNativeAdsLoaderDelegate <NSObject>
@optional
//整个TradPlus广告位加载结束。
- (void)nativeAdsAllLoaded:(MsNativeAdsLoader *)adsLoader isAdReady:(BOOL)isAdReady readyAds:(NSArray *)readyAds;
//TradPlus广告位上配置的单个源加载成功
- (void)nativeAdsLoaded:(MsNativeAdsLoader *)adsLoader;
//TradPlus广告位上配置的单个源加载失败
- (void)nativeAds:(MsNativeAdsLoader *)adsLoader didFailWithError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
