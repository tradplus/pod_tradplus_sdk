

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/TradPlusAdUnitCache.h>
#import <TradPlusAds/TradPlusUnitError.h>
#import <TradPlusAds/TradPlusAdLoadManager.h>
#import <TradPlusAds/TradPlusWaitingPool.h>
#import <TradPlusAds/TradPlusGroupManager.h>


@interface TradPlusUnitManager : NSObject

@property (readonly,assign)BOOL isAdLoading;

//流量分组
@property (nonatomic,copy)NSString *segmentTag;
@property (nonatomic,copy)NSString *segmentId;
@property (nonatomic,copy)NSString *bucketId;
@property (nonatomic,strong)NSDictionary *dicCustomValue;
//本地配置
@property (nonatomic,strong)NSDictionary *localParams;
//服务器奖励验证信息
@property (nonatomic,copy)NSString *serverSideUserID;
@property (nonatomic,copy)NSString *serverSideCustomData;
///加载模式
@property (nonatomic,assign)TPLoadMode loadMode;
@property (nonatomic,assign)CGFloat loadMaxWaitTime;

- (instancetype)initWithPlacementID:(NSString *)placementID;
- (void)loadAd;
- (void)loadAdWithType:(TPLoadType)loadType;
- (BOOL)checkReady;
- (void)entryAdScenario:(NSString *)sceneId;
- (void)logBase64Config;
- (void)autoLoadShowSuccess;
- (void)autoLoadShowFail;

///获取最近缓存广告信息 nil = 没有
- (NSDictionary *)getReadyItemInfo;
///获取ready的缓存
- (void)getReadyItemWithSceneId:(NSString *)sceneId callback:(void (^)(TradPlusAdWaterfallItem *item , NSError *error))callback;
///获取缓存广告 nil = 没有 获取后会从缓存中移除
- (TradPlusAdWaterfallItem *)getReadWaterfallItem;
- (TradPlusAdWaterfallItem *)getItem;
///缓存清理后需要重新load
- (void)cacheAdExpired;
//缓存检测
- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkExpiredAd;
- (BOOL)checkRestrain;
//清除缓存
- (void)clearCache;
- (void)clearShareCache;

///全局展示回调
- (void)adImpression:(NSDictionary *)adInfo;
///show 1100
- (void)showFinsihWithItem:(TradPlusAdWaterfallItem *)item;
///show 1300
- (void)showFinish1300WithItem:(TradPlusAdWaterfallItem *)item;
///show 1310
- (void)showFinish1310WithItem:(TradPlusAdWaterfallItem *)item;
///show Fail 1350 失败
- (void)showFailWithItem:(TradPlusAdWaterfallItem *)item error:(NSError *)error;
///click 1200
- (void)clickEventWithItem:(TradPlusAdWaterfallItem *)item;
///close 1400 插屏和开屏使用
- (void)closeEventWithItem:(TradPlusAdWaterfallItem *)item;
///1500 回调奖励
- (void)rewardedEventWithItem:(TradPlusAdWaterfallItem *)item;

///是否频限(展示)
- (NSError *)checkLimitWithWaterfallItem:(TradPlusAdWaterfallItem *)item;

///返回数据封装
- (NSMutableDictionary *)getCallbackInfoWithItem:(TradPlusAdWaterfallItem *)item;
- (NSMutableDictionary *)getBaseCallbackInfo;

///日志上报
- (void)uploadEvent:(MSEventType)EventType errorCode:(NSInteger)errorCode;
- (void)uploadEvent:(NSInteger)EventType item:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode info:(NSDictionary *)info;

///bidding埋点回调
- (void)biddingItemStart:(TradPlusAdWaterfallItem *)item;
- (void)biddingItemEnd:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode error:(NSError *)error nbr:(NSInteger)nbr;
- (void)C2SBiddingItemError:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode errorStr:(NSString *)errorStr;

//加载埋点及回调
- (void)startLoadAdWithItem:(TradPlusAdWaterfallItem *)item;
- (void)callbackWithErrorCode:(TPUnitErrorCode)code;
- (void)showAdTypeError;
- (void)waitItemLoadFinish:(TradPlusAdWaterfallItem *)item;

- (void)speedModeLoaded:(TradPlusAdLoadManager *)adLoadManager;
- (void)didLoadWithWaterfallItem:(TradPlusAdWaterfallItem *)item noCache:(BOOL)noCache adLoadManager:(TradPlusAdLoadManager *)adLoadManager;
- (void)bottomAdOneLayerLoad:(TradPlusAdWaterfallItem *)item adLoadManager:(TradPlusAdLoadManager *)adLoadManager isCache:(BOOL)isCache;
- (void)callbackBottomAdLoaded:(TradPlusAdWaterfallItem *)item adLoadManager:(TradPlusAdLoadManager *)adLoadManager;
///兜底广告loaded埋点及回调
- (void)bottomAdLoadedWithItem:(TradPlusAdWaterfallItem *)item adLoadManager:(TradPlusAdLoadManager *)adLoadManager;

- (void)loadFailedWithWaterfallItem:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode error:(NSError *)error netStatus:(NSString *)netStatus;

- (void)allLoadedWithWaterfallSuccess:(BOOL)waterfallSuccess bottomSuccess:(BOOL)bottomSuccess code:(NSInteger)code loadedCount:(NSInteger)loadedCount requestId:(NSString *)requestId;

///waterfallItem 赋值源级别参数
- (void)setExtra:(TradPlusAdWaterfallItem *)item;

//bidding通知
- (void)sendLossWithItem:(TradPlusAdWaterfallItem *)item loadFail:(BOOL)loadFail nbr:(NSInteger)nbr;
- (void)sendWinWithItem:(TradPlusAdWaterfallItem *)item;
- (void)sendImpressionWithItem:(TradPlusAdWaterfallItem *)item;

//加载失败记录相关
// YES = 通过；NO = 未通过
- (BOOL)checkLoadFailedHisWithItem:(TradPlusAdWaterfallItem *)item;
- (void)removeLoadFailedHisWithItem:(TradPlusAdWaterfallItem *)item;
- (void)saveLoadFailedHisWithItem:(TradPlusAdWaterfallItem *)item;

//服务器奖励
- (void)tpServerRewardWithItem:(TradPlusAdWaterfallItem *)item callbackInfo:(NSDictionary *)callbackInfo;

//获取三方广告对象

- (id)getCustomObject;

@property (nonatomic,copy) void (^OfferwallClassNameCallback)(NSString *className);

@property (nonatomic, copy) void (^AdStartLoad)(void);
@property (nonatomic, copy) void (^AdIsLoading)(void);
@property (nonatomic, copy) void (^AdLoadFail)(NSError *error);
@property (nonatomic, copy) void (^AdAllLoaded)(BOOL success,NSString *requestId);

@property (nonatomic, copy) void (^AdSouceFirstLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceStartLoad)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoadFail)(TradPlusAdWaterfallItem *item,NSError *error);

@property (nonatomic, copy) void (^AdStartBidding)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdEndBidding)(TradPlusAdWaterfallItem *item, NSError *error);

@property (nonatomic,strong)TradPlusMutableArray *adLoadManagerArray;
@property (nonatomic,strong)NSDate *startLoadTime;
@property (nonatomic,readonly)NSString *placementID;
@property (nonatomic,readonly)TradPlusAdUnitCache *adCache;
@property (nonatomic,readonly)TradPlusAdConfModel *confModel;

//Native 相关属性
@property (nonatomic,assign)BOOL finishDownload;
@property (nonatomic,assign)CGSize templateRenderSize;
@property (nonatomic,assign)BOOL isAutoLoadMode;
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

//banner相关属性
@property (nonatomic,weak)UIViewController *bannerRootViewController;
@property (nonatomic,weak)UIViewController *nativeRootViewController;
@property (nonatomic,assign)CGSize bannerSize;
@property (nonatomic,assign)TPBannerContentMode bannerContentMode;
//@property (nonatomic,copy)

@property (nonatomic,assign)CGSize splashBottomSize;
@property (nonatomic,weak)UIWindow *splashWindow;

//MediaVideo
@property (nonatomic,weak)UIView *mediaVideoAdContainer;
@property (nonatomic,weak)UIViewController *mediaVideoViewController;
@property (nonatomic,weak)id contentPlayhead;
@property (nonatomic,assign)BOOL mute;

@property (nonatomic,assign)MsADType serverAdType;
@property (nonatomic,assign)MsADType adType;
@property (nonatomic,assign)NSInteger customCacheCount;
@property (nonatomic,readonly)NSInteger readyAdCount;

@property (nonatomic,assign)BOOL isReady;

@property (nonatomic,assign)BOOL noBidMode;
@property (nonatomic,assign)BOOL isSharedPool;
@property (nonatomic,strong)TradPlusWaitingPool *waitingPool;
@property (nonatomic,strong)TradPlusGroupManager *groupManager;
@end
