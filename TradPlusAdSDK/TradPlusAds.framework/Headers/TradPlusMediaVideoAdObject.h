//
//  TradPlusMediaVideoAdObject.h
//  TradPlusAds
//
//  Created by Even on 2023/2/17.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusBaseAdapter.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/MsCommon.h>

@protocol TradPlusADMediaVideoDelegate;

NS_ASSUME_NONNULL_BEGIN

/// 注意：此对象需要在主线程上释放
@interface TradPlusMediaVideoAdObject : NSObject

- (instancetype)initWithWaterfallItem:(TradPlusAdWaterfallItem *)waterfallItem unitManager:(TradPlusUnitManager *)unitManager;

/// v12.2.0新增
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithSceneId:(nullable NSString *)sceneId;

/// v12.2.0新增
/// @param customView 自定义的插播视图 仅支持TPADX //TradPlusAdxInStreamView
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithInStreamView:(nullable UIView *)customView sceneId:(nullable NSString *)sceneId;

///开始播放
/// @param viewController 当前视图控制器或为nil
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithViewController:(nullable UIViewController *)viewController sceneId:(nullable NSString *)sceneId;


/// 开始播放
/// @param viewController 当前视图控制器或为nil
/// @param customView 自定义的插播视图 仅支持TPADX //TradPlusAdxInStreamView
/// @param sceneId 场景ID 没有则设置为nil
- (void)startWithViewController:(nullable UIViewController *)viewController inStreamView:(nullable UIView *)customView sceneId:(nullable NSString *)sceneId;

///中帖，后贴展示时调用
- (void)start;

///暂停播放
- (void)pause;

///继续播放
- (void)resume;

///销毁
- (void)destory;

///v10.0.0新增 使用IMA后贴时需手动调用
- (void)contentComplete;

///v10.0.0新增
- (void)discardAdBreak;

///v11.1.0新增
- (void)registerFriendlyObstructionWithView:(UIView *)view purpose:(TPFriendlyObstructionPurpose)purpose detailedReason:(nullable NSString *)detailedReason;
- (void)unregisterAllFriendlyObstructions;

//v12.2.0新增获取广告视图 默认尺寸 100/100,hidden=YES;
@property (nonatomic,readonly)UIView *adView;

//v12.2.0 vmap 绑定的 contentPlayhead
@property (nonatomic,readonly)id contentPlayhead;

//用于开发者在广告展示前设置透传的自定义数据，SDK将在展示后的相关回调中返回。
//开发者可通过 key：customAdInfo 获取。adInfo[@"customAdInfo"]
@property (nonatomic, strong)NSDictionary *customAdInfo;

@property (nonatomic,readonly)TradPlusBaseAdapter *adapter;

///三方的资源对象 IMA对象为 IMAAd
@property (nonatomic,readonly)id _Nullable getCustomNetworkObj;

///IMA AdsManager 对象为 IMAAdsManager
@property (nonatomic,readonly)id _Nullable getAdsManager;

///三方配置信息
@property (nonatomic,readonly)NSDictionary *config;
///三方广告网络对应的编号
@property (nonatomic,readonly)MSThirdNetwork channel_id;
///三方广告网络名称
@property (nonatomic,readonly)NSString *channel_name;
///用于判断是否为ADX广告
@property (nonatomic,assign)BOOL isADX;
///10.0.0新增 标志视频协议类型
@property (nonatomic,readonly)TPMediaVideoProtocol videoProtocol;
///10.0.0新增 设置当前广告的展示相关回调（可选）
@property (nonatomic,weak) id <TradPlusADMediaVideoDelegate> delegate;

@property (nonatomic,readonly)NSDictionary *adInfo;
@end

NS_ASSUME_NONNULL_END
