//
//  TradPlusAdNativeObject.h
//  TradPlusAds
//
//  Created by xuejun on 2021/12/8.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdNativeItem.h>
#import <TradPlusAds/TradPlusAdCustomVideoPaster.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdNativeObject : NSObject

- (instancetype)initWithNativeItem:(TradPlusAdNativeItem *)nativeItem
                     waterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;

/// 显示广告
/// @param renderingViewClass renderingViewClass
/// @param subView 渲染后会添加到此view上
/// @param sceneId 场景ID 没有则设置为nil
- (void)showADWithRenderingViewClass:(Class)renderingViewClass
                             subview:(UIView *)subView
                             sceneId:(nullable NSString *)sceneId;

/// 显示广告
/// @param renderer 自定义renderer
/// @param subView 渲染后会添加到此view上
/// @param sceneId 场景ID 没有则设置为nil
- (void)showADWithNativeRenderer:(TradPlusNativeRenderer *)renderer
                         subview:(UIView *)subView
                         sceneId:(nullable NSString *)sceneId;
///用于移除adView
- (void)clear;

- (NSArray <UIView *>*)getDrawList;
///TP封装的Native资源
@property (nonatomic,readonly)TradPlusAdRes *res;

@property (nonatomic,readonly)TradPlusBaseAdapter *adapter;
///三方的资源对象
@property (nonatomic,readonly)id customObject;
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
///原生类型
@property (nonatomic,assign)TPNativeADTYPE adType;
///支持自定义播放器的贴片，平台：穿山甲视频贴片
@property (nonatomic,readonly)TradPlusAdCustomVideoPaster *customVideoPaster;

@end

NS_ASSUME_NONNULL_END
