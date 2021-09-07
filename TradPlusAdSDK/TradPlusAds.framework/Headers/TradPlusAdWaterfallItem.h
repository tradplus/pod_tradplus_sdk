
#import "TradPlusDataModel.h"
#import "TradPlusAdapterProtocol.h"
#import "TradPlusBaseAdapter.h"
#import "TradPlusAdRes.h"
#import "TradPlusAdsourceplacementModel.h"
#import "MsCommon.h"

typedef enum : NSUInteger {
    TPAdWaterfallItemStatusNormal = 0,
    TPAdWaterfallItemStatusLoading = 1,
    TPAdWaterfallItemStatusReady = 2,
    TPAdWaterfallItemStatusExpired = 3
} TPAdWaterfallItemStatus;


NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdWaterfallItem : TradPlusDataModel

@property (nonatomic,copy)NSString *placementID;
///三方渠道id
@property (nonatomic,assign)NSInteger id;
///频次限制
@property (nonatomic,strong)NSDictionary *frequency;
@property (nonatomic,copy)NSString *name;//特殊 nothing
///三方授权信息
@property (nonatomic,strong)NSDictionary *config;
///广告源id
@property (nonatomic,copy)NSString *adsource_placement_id;
///1:竖屏  2:横屏 3:横/竖屏自适应（不限制） 4：仅竖屏 5：仅横屏
@property (nonatomic,assign)NSInteger direction;
///sigmob广告类型   1:插屏  2:激励视频'
@property (nonatomic,assign)NSInteger sigmob_type;
///非零情况下以为有尺寸
@property (nonatomic,assign)NSInteger ad_size;
@property (nonatomic,assign)NSDictionary *ad_size_info;
///视频静音 1:是 2:否
@property (nonatomic,assign)NSInteger video_mute;
///自动播放视频  1:总是  2:仅wifi'
@property (nonatomic,assign)NSInteger auto_play_video;
///'是否使用模版渲染  1:是 2:否',
@property (nonatomic,assign)NSInteger is_template_rendering;
///load超时
@property (nonatomic,assign)NSInteger loadTimeout;
///广告有效时间
@property (nonatomic,assign)NSInteger adValidTime;
///ecpm
@property (nonatomic,assign)NSString *ecpm;
@property (nonatomic,assign)NSString *ecpm_avg;
///ecpm_cny
@property (nonatomic,assign)NSString *ecpm_cny;
///视频最大时长 -1:不限时长  限定时长5-60
@property (nonatomic,assign)NSInteger video_max_time;



///广告源状态 0=通常 1=loading 2=ready 3=过期
@property (nonatomic,assign)TPAdWaterfallItemStatus status;
///最后一次失败时间
@property (nonatomic,assign)NSInteger lastFailedTime;

@property (nonatomic,strong)TradPlusBaseAdapter* adapter;

///广告类型模版 原生类型: 1 标准, 2 原生横幅,
@property (nonatomic,assign)NSInteger secType;
///广告类型
@property (nonatomic,copy)NSString *adType;

@property (nonatomic,assign)NSInteger waterfallIndex;

@property (nonatomic,strong)NSArray *style_name;

//bidding相关
@property (nonatomic,assign)BOOL isBidding;
@property (nonatomic,copy)NSString *biddingValue;
@property (nonatomic,strong)TradPlusAdsourceplacementModel *adsourceplacement;
@property (nonatomic,copy)NSString *topPirce;
@property (nonatomic,assign)NSInteger payloadTimeout;
@property (nonatomic,strong)NSDate *startBidddingDate;
@property (nonatomic,strong)NSDate *finishBiddingDate;

@property (nonatomic,strong)NSDate *startLoadDate;
@property (nonatomic,strong)NSDate *finishLoadDate;
@property (nonatomic,strong)NSDictionary *originalDictionary;

@property (nonatomic,assign)NSInteger ccpa;
@property (nonatomic,assign)NSInteger coppa;
@property (nonatomic,assign)NSInteger gdpr;
@property (nonatomic,strong)TradPlusAdRes *adRes;

@property (nonatomic,copy)NSString *requestId;
//Native 相关属性
@property (nonatomic,assign)BOOL finishDownload;
@property (nonatomic,assign)CGSize templateRenderSize;
@property (nonatomic,assign)TPTemplateContentMode templateContentMode;
@property (nonatomic,strong)Class renderingViewClass;
///no = 被限制
- (BOOL)noLimit;
- (NSString *)asu;
- (void)saveShowTime;
- (NSMutableDictionary *)getCallbackInfo;
@end

NS_ASSUME_NONNULL_END