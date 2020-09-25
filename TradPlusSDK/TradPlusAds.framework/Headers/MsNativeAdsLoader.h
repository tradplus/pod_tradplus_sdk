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
@property (nonatomic, weak, nullable) id<MsNativeAdsLoaderDelegate> delegate;
@property (nonatomic) BOOL isLoading;
- (void)setAdUnitID:(NSString *)adUnitID;
- (void)loadAds:(int)adsCount;

@end

@protocol MsNativeAdsLoaderDelegate <NSObject>
@required
//整个TradPlus广告位加载结束。
- (void)nativeAdsAllLoaded:(BOOL)isAdReady readyAds:(NSArray *)readyAds error:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
