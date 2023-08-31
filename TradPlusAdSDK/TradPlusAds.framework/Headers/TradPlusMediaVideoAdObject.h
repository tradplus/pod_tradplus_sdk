//
//  TradPlusMediaVideoAdObject.h
//  TradPlusAds
//
//  Created by Even on 2023/2/17.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusBaseAdapter.h>
#import <TradPlusAds/MsCommon.h>
#import <TradPlusAds/TradPlusAdxInStreamView.h>

NS_ASSUME_NONNULL_BEGIN

/// 注意：此对象需要在主线程上释放
@interface TradPlusMediaVideoAdObject : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem;

///开始播放
/// @param viewController 当前视图控制器或为nil
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithViewController:(nullable UIViewController *)viewController sceneId:(nullable NSString *)sceneId;


/// 开始播放
/// @param viewController 当前视图控制器或为nil
/// @param customView 自定义的插播视图 仅支持TPADX
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithViewController:(nullable UIViewController *)viewController inStreamView:(nullable TradPlusAdxInStreamView *)customView sceneId:(nullable NSString *)sceneId;

///暂停播放
- (void)pause;

///继续播放
- (void)resume;

///销毁
- (void)destory;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic,readonly)TradPlusBaseAdapter *adapter;

///三方的资源对象
@property (nonatomic,readonly)id _Nullable getCustomNetworkObj;
///三方配置信息
@property (nonatomic,readonly)NSDictionary *config;
///三方广告网络对应的编号
@property (nonatomic,readonly)MSThirdNetwork channel_id;
///三方广告网络名称
@property (nonatomic,readonly)NSString *channel_name;

@end

NS_ASSUME_NONNULL_END
