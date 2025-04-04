//
//  TradPlusAdSplashObject.h
//  TradPlusAds
//
//  Created by xuejun on 2023/4/20.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdNativeItem.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdSplashObject : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;

//设置自定义 原生 renderingViewClass
@property (nonatomic,strong)Class renderingViewClass;

//设置自定义 原生 nativeRenderer
@property (nonatomic,strong)TradPlusNativeRenderer *nativeRenderer;

@property (nonatomic,readonly)TradPlusBaseAdapter *adapter;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

///用于判断是否为ADX广告
@property (nonatomic,assign)BOOL isADX;

///获取三方渠道广告对象
@property (nonatomic,readonly)id _Nullable splashAdObject;
///三方配置信息
@property (nonatomic,readonly)NSDictionary *config;
///广告位ID
@property (nonatomic,readonly)NSString *adunit_id;
///广告源ID
@property (nonatomic,readonly)NSString *adsource_placement_id;
///三方广告网络对应的编号
@property (nonatomic,readonly)MSThirdNetwork channel_id;
///三方广告网络名称
@property (nonatomic,readonly)NSString *channel_name;
///TP封装的Native资源 非原生拼接开屏返回 nil
@property (nonatomic,readonly)TradPlusAdRes *_Nullable res;

@property (nonatomic,readonly)NSInteger placement_ad_type;

@property (nonatomic,readonly)NSDictionary *adInfo;
@end

NS_ASSUME_NONNULL_END
