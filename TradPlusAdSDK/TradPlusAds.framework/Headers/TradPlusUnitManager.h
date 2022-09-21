

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/TradPlusAdUnitCache.h>
#import <TradPlusAds/TradPlusBiddingTokenManager.h>
#import <TradPlusAds/TradPlusBiddingManager.h>


@interface TradPlusUnitManager : NSObject

@property (readonly,assign)BOOL isAdLoading;

//流量分组
@property (nonatomic,copy)NSString *segmentTag;
@property (nonatomic,copy)NSString *segmentId;
@property (nonatomic,copy)NSString *bucketId;
@property (nonatomic,strong)NSDictionary *dicCustomValue;
//服务器奖励验证信息
@property (nonatomic,copy)NSString *serverSideUserID;
@property (nonatomic,copy)NSString *serverSideCustomData;

- (instancetype)initWithPlacementID:(NSString *)placementID;
- (void)loadAd;
- (void)loadAdWithType:(NSInteger)loadType;
- (BOOL)checkReady;
- (void)entryAdScenario:(NSString *)sceneId;
- (void)logBase64Config;
- (void)autoLoadShowSuccess;
- (void)autoLoadShowFail;

///获取ready的缓存
- (void)getReadyItemWithSceneId:(NSString *)sceneId callback:(void (^)(TradPlusAdWaterfallItem *item , NSError *error))callback;

///show 1100
- (void)showFinsihWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///show 1300
- (void)showFinish1300WithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;

///show Fail 1350 失败
- (void)showFailWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId error:(NSError *)error;
///click
- (void)clickEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///close 1400 插屏和开屏使用
- (void)closeEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///1500 回调奖励
- (void)rewardedEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///获取最近缓存广告信息 nil = 没有
- (NSDictionary *)getReadyItemInfo;

- (NSError *)checkLimitWithWaterfallItem:(TradPlusAdWaterfallItem *)item;

///获取缓存广告 nil = 没有 获取后会从缓存中移除
- (TradPlusAdWaterfallItem *)getReadWaterfallItem;

///缓存清理后需要重新load
- (void)cacheAdExpired;
///返回数据封装
- (NSMutableDictionary *)getCallbackInfoWithItem:(TradPlusAdWaterfallItem *)item;
- (NSMutableDictionary *)getBaseCallbackInfo;
///日志上报
- (void)uploadEvent:(NSInteger)EventType item:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode info:(NSDictionary *)info;
///获取 Waterfall第一个Item
- (TradPlusAdWaterfallItem *)getNextWaterfallItem;

- (void)setExtra:(TradPlusAdWaterfallItem *)item;

// YES = 通过；NO = 未通过
- (BOOL)checkLoadFailedHisWithItem:(TradPlusAdWaterfallItem *)item;

//服务器奖励
- (void)tpServerRewardWithItem:(TradPlusAdWaterfallItem *)item callbackInfo:(NSDictionary *)callbackInfo;

//缓存检测
- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkExpiredAd;

//清除缓存
- (void)clearCache;

@property (nonatomic,copy) void (^OfferwallClassNameCallback)(NSString *className);

@property (nonatomic, copy) void (^AdStartLoad)(void);
@property (nonatomic, copy) void (^AdLoadFail)(NSError *error);
@property (nonatomic, copy) void (^AdAllLoaded)(BOOL success);

@property (nonatomic, copy) void (^AdSouceFirstLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceStartLoad)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoadFail)(TradPlusAdWaterfallItem *item,NSError *error);

@property (nonatomic, copy) void (^AdStartBidding)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdEndBidding)(TradPlusAdWaterfallItem *item, NSError *error);

@property (nonatomic,strong)NSDate *startLoadTime;
@property (nonatomic,readonly)NSString *placementID;
@property (nonatomic,readonly)TradPlusAdUnitCache *adCache;
@property (nonatomic,readonly)TradPlusBiddingManager *biddingManager;
@property (nonatomic,readonly)TradPlusBiddingTokenManager *biddingTokenManager;
@property (nonatomic,readonly)TradPlusAdConfModel *confModel;

//Native 相关属性
@property (nonatomic,assign)BOOL finishDownload;
@property (nonatomic,assign)CGSize templateRenderSize;
@property (nonatomic,assign)BOOL isAutoLoadMode;
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

//banner相关属性
@property (nonatomic,weak)UIViewController *bannerRootViewController;
@property (nonatomic,assign)CGSize bannerSize;
@property (nonatomic,assign)TPBannerContentMode bannerContentMode;

@property (nonatomic,assign)CGSize splashBottomSize;
@property (nonatomic,weak)UIWindow *splashWindow;

@property (nonatomic,assign)MsADType adType;
@property (nonatomic,assign)NSInteger customCacheCount;
@property (nonatomic,readonly)NSInteger readyAdCount;

///加载模式
@property (nonatomic,assign)TPLoadMode loadMode;
@end
