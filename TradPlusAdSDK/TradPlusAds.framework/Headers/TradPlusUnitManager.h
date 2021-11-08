

#import <Foundation/Foundation.h>
#import "TradPlusAdWaterfallItem.h"
#import "TradPlusAdUnitCache.h"
#import "TradPlusBiddingManager.h"


@interface TradPlusUnitManager : NSObject

@property (readonly,assign)BOOL isAdLoading;

//流量分组
@property (nonatomic,copy)NSString *segmentTag;
@property (nonatomic,copy)NSString *bucketId;
@property (nonatomic,strong)NSDictionary *dicCustomValue;
//服务器奖励验证信息
@property (nonatomic,copy)NSString *serverSideUserID;
@property (nonatomic,copy)NSString *serverSideCustomData;

- (instancetype)initWithPlacementID:(NSString *)placementID;
- (void)loadAd;
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
- (void)showFailWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///click
- (void)clickEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///close 1400 插屏和开屏使用
- (void)closeEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///1500 回调奖励
- (void)rewardedEventWithItem:(TradPlusAdWaterfallItem *)item sceneId:(NSString *)sceneId;
///获取最近缓存广告信息 nil = 没有
- (NSDictionary *)getReadyItemInfo;

///缓存清理后需要重新load
- (void)cacheAdExpired;
///返回数据封装
- (NSMutableDictionary *)getCallbackInfoWithItem:(TradPlusAdWaterfallItem *)item;
///日志上报
- (void)uploadEvent:(NSInteger)EventType item:(TradPlusAdWaterfallItem *)item errorCode:(NSInteger)errorCode info:(NSDictionary *)info;
///获取 Waterfall第一个Item
- (TradPlusAdWaterfallItem *)getNextWaterfallItem;

- (void)setExtra:(TradPlusAdWaterfallItem *)item;

//缓存检测
- (void)startCheckExpire;
- (void)stopCheckExpire;
- (void)checkExpiredAd;


@property (nonatomic, copy) void (^AdStartLoad)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdLoadFail)(NSError *error);
@property (nonatomic, copy) void (^AdAllLoaded)(BOOL success);

@property (nonatomic, copy) void (^AdSouceFirstLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoaded)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdSouceLoadFail)(TradPlusAdWaterfallItem *item,NSError *error);

@property (nonatomic, copy) void (^AdStartBidding)(TradPlusAdWaterfallItem *item);
@property (nonatomic, copy) void (^AdEndBidding)(TradPlusAdWaterfallItem *item, NSError *error);

@property (nonatomic,strong)NSDate *startLoadTime;
@property (nonatomic,readonly)NSString *placementID;
@property (nonatomic,readonly)TradPlusAdUnitCache *adCache;
@property (nonatomic,readonly)TradPlusBiddingManager *biddingManager;
@property (nonatomic,readonly)TradPlusAdConfModel *confModel;

//Native 相关属性
@property (nonatomic,assign)BOOL finishDownload;
@property (nonatomic,assign)CGSize templateRenderSize;
@property (nonatomic,assign)BOOL isAutoLoadMode;
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;

//banner相关属性
@property (nonatomic,weak)UIViewController *bannerRootViewController;

@property (nonatomic,assign)CGSize splashBottomSize;
@property (nonatomic,weak)UIWindow *splashWindow;

@property (nonatomic,assign)MsADType adType;
@end
