//
//  MsCommon.h
//
//  Created by ms-mac on 2016/12/1.
//  Copyright © 2016年 TradPlusAd All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifndef tp_dispatch_main_async_safe
#define tp_dispatch_main_async_safe(block)\
    if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
        block();\
    } else {\
        dispatch_async(dispatch_get_main_queue(), block);\
    }
#endif

#ifndef tp_dispatch_main_sync_safe
#define tp_dispatch_main_sync_safe(block)\
    if (dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL) == dispatch_queue_get_label(dispatch_get_main_queue())) {\
        block();\
    } else {\
        dispatch_sync(dispatch_get_main_queue(), block);\
    }
#endif

extern NSInteger TP_Encryption_Mode;

static int const kMsSDKReqTimeout = 15;

extern NSString *gEventServerURL;
extern NSString *gEventServerV2URL;
extern NSString *gAdxEventServerURL;
extern NSString *gCrossEventServerURL;
extern NSString *gAdconfServerURL;
extern NSString *gCrossAdconfServerURL;
extern NSString *gBiddingServerURL;
extern NSString *gRewardServerURL;
extern NSString *gImpCallbackURL;

extern BOOL gTPTestMode;
extern BOOL gForceGetIDFA;
extern BOOL gMsSDKDebugMode;
extern BOOL gMsSDKForceTest;
extern BOOL gMsSDKInited;
extern BOOL gMsSDKAllowWrite;
extern BOOL gMsSDKAuthUID;
extern BOOL gMsSDKIsCN;
extern BOOL gMsSDKIsCA;
extern BOOL gTPOpenPersonalizedAd;
extern BOOL gTPUploadUseTime;
extern BOOL gTPUploadFullMode;
extern NSInteger gMsEventInterval;
extern NSInteger gMsEventUPLoadMaxCount;
extern int gMsHTTPTimeout;
extern int gMsPayLoadTimeout;
extern NSString * const gConsentStatusStorageKey;
extern NSString * const gGDPRAppliesStorageKey;
extern NSString * const gTPCCPAStorageKey;
extern NSString * const gTPIDFAPermissionKey;
extern NSString * const gTPCOPPAStorageKey;
extern NSString * const gTPATTEnableStorageKey;
extern NSString * const gTPPayloadOutTimeKey;

extern BOOL gTPCNServer;

extern NSString * const gNeedCheckExpiredAd;
extern NSString * const gAppAllowUploadUseTime;

extern NSString * const kTPCapHourLimit;
extern NSString * const kTPCapDayLimit;
extern NSString * const kTPPacingLimit;

typedef enum : NSUInteger {
    TPTemplateContentModeScaleToFill,//自动充满subview默认
    TPTemplateContentModeCenter,//保持在subview的center
} TPTemplateContentMode;

typedef enum : NSUInteger {
    TPBannerContentModeTop,//顶部水平居中
    TPBannerContentModeCenter,//垂直居中并水平居中
    TPBannerContentModeBottom,//底边水平居中
} TPBannerContentMode;

typedef enum : NSUInteger {
    TPAdOperationStatusNormal = 0,
    TPAdOperationStatusLoading = 1,
    TPAdOperationStatusFailed = 2,
    TPAdOperationStatusFinish = 3
} TPAdOperationStatus;

typedef NS_ENUM(NSInteger, MSBool) {
    MSBoolNo = -1,
    MSBoolUnknown = 0,
    MSBoolYes = 1,
};

typedef NS_ENUM(NSInteger, MSConsentStatus) {
    MSConsentStatusUnknown = 0,
    MSConsentStatusDenied,
    MSConsentStatusConsented
};

typedef enum : NSUInteger {
    TPLoadMode_ECPM = 0,//ecpm优先 默认
    TPLoadMode_SPEED,//速度优先
} TPLoadMode;

typedef enum
{
    ADTYPE_BANNER,
    ADTYPE_NATIVE,
    ADTYPE_INTERSTITIAL,
    ADTYPE_REWARDEDVIDEO,
    ADTYPE_OFFERWALL,
    ADTYPE_SPLASH
} MsADType;

typedef enum : NSUInteger {
    TPNativeADTYPE_Unknown = 0,//未知
    TPNativeADTYPE_Feed,//自渲染
    TPNativeADTYPE_Template,//模版
    TPNativeADTYPE_Paster,//贴片
    TPNativeADTYPE_Draw//draw信息流
} TPNativeADTYPE;

typedef enum
{
    EV_APP_USE_TIME          = 10,
    EV_REQ_OPEN_API_START    = 100,
    EV_REQ_OPEN_API          = 200,
    EV_INIT_NETWORK          = 250,
    EV_PRE_LOAD_ADCONF_START = 300,
    EV_PRE_LOAD_ADCONF       = 400,
    EV_LOAD_AD_START         = 500,
    EV_LOAD_AD               = 600,
    EV_BID_START             = 610,
    EV_BID_END               = 611,
    EV_BID_NETWORK_TIME      = 615,
    EV_BID_WIN               = 620,
    EV_BID_LOST              = 621,
    EV_LOAD_NETWORK_AD_START = 700,
    EV_LOAD_NETWORK_AD       = 800,
    EV_LOAD_FIRST_NETWORK_AD = 805,
    EV_LOAD_FIRST_SUCCESS_AD = 808,
    EV_LOAD_AD_RESULT        = 810,
    EV_NETWORK_AD_ISREADY    = 850,
    EV_IS_READY              = 900,
    EV_SHOW_AD_START         = 1000,
    EV_SHOW_AD               = 1100,
    EV_CLICK_AD              = 1200,
    EV_AD_VIDEO_START        = 1300,
    EV_BID_IMP               = 1320,
    EV_AD_VIDEO_ERROR        = 1350,
    EV_AD_VIDEO_CLOSE        = 1400,
    EV_AD_VIDEO_REWARD       = 1500,
    
    EV_CROSS_INIT_SDK        = 5100,
    EV_CROSS_LOAD_START      = 5700,
    EV_CROSS_LOAD_END        = 5800,
    EV_CROSS_DOWNLOAD_VIDEO_START = 5830,
    EV_CROSS_DOWNLOAD_VIDEO_END   = 5840,
    EV_CROSS_DOWNLOAD_IMAGE_START = 5850,
    EV_CROSS_DOWNLOAD_IMAGE_END   = 5860,
    EV_CROSS_IS_ADREADY      = 5900,
    EV_CROSS_SHOW_START      = 6000,
    EV_CROSS_SHOW_END        = 6100,
    EV_CROSS_TRACK_SHOW_START     = 6145,
    EV_CROSS_TRACK_SHOW_END       = 6150,
    EV_CROSS_CLICK_START          = 6200,
    EV_CROSS_CLICK_END            = 6230,
    EV_CROSS_OPEN_APP             = 6240,
    EV_CROSS_TRACK_CLICK_START    = 6245,
    EV_CROSS_TRACK_CLICK_END      = 6250,
    EV_CROSS_VIDEO_START          = 6300,
    EV_CROSS_VIDEO_25PER          = 6400,
    EV_CROSS_VIDEO_50PER          = 6500,
    EV_CROSS_VIDEO_70PER          = 6600,
    EV_CROSS_VIDEO_REWARD         = 6650,
    EV_CROSS_VIDEO_CLOSE          = 6700,
    //custom
    EV_APP_CRASH             = 10000,
    EV_LOAD_AD_SKIP          = 10600
} MSEventType;

typedef enum
{
    NETWORK_FACEBOOK = 1,
    NETWORK_ADMOB,
    NETWORK_MOPUB,
    NETWORK_ADCOLONY,
    NETWORK_UNITYADS,
    NETWORK_TAPJOY,
    NETWORK_VUNGLE,
    NETWORK_APPLOVIN  = 9,
    NETWORK_IRONSOURCE,
//    NETWORK_INMOBI,
//    NETWORK_SMAATO   = 12,
    NETWORK_ADEXPRESS   = 13,
    NETWORK_MOBFOX,
    NETWORK_CHARTBOOST,
    NETWORK_GDTMOB,
    NETWORK_BYTEDANCE,
    NETWORK_MINTEGRAL,
    NETWORK_PANGLE,
    NETWORK_KUAISHOU,
    NETWORK_SIGMOB,
    NETWORK_INMOBI   = 23,
    NETWORK_FYBER    = 24,
    NETWORK_YOUDAO   = 25,     //有道
    NETWORK_CROSS    = 27,     
    NETWORK_STARTAPP = 28,
    NETWORK_HELIUM   = 30,
    NETWORK_MAIO     = 31,
    NETWORK_MYTARGET = 33,
    NETWORK_OGURY = 34,
    NETWORK_KIDOZ    = 37,
    NETWORK_SMAATO   = 38,
    NETWORK_TPADX    = 40,
    NETWORK_BAIDU    = 43,
    NETWORK_KLEVIN   = 44,
    NETWORK_A4G      = 45,
    NETWORK_SUPERAWESOME  = 47,
    NETWORK_GOOGLEAdMANAGER = 48,
    NETWORK_GROMORE  = 49,
    NETWORK_YANDEX   = 50,
    NETWORK_MAX = 51,
    NETWORK_VERVE    = 53,
} MSThirdNetwork;

@interface MsCommon : NSObject

+ (instancetype)sharedInstance;

+ (NSString *)date2str:(NSDate *)date;
+ (NSDate *)str2date:(NSString *)str;

+ (NSString *)localUUID;
+ (NSString *)getTimeStringForNow;
+ (NSString *)getSecondsStringForNow;
+ (NSString *)getNowStrWithFormat:(NSString *)formatStr;
+ (NSString *)getLocalFileFullPath:(NSString *)fileName;
+ (NSString *)getStrategyFullPath:(NSString *)fileName;
+ (NSString *)getCrossFullPath:(NSString *)fileName;
+ (NSString *)channelID2Name:(int)channelID;
+ (NSString *)eventType2Str:(MSEventType)evid;
+ (NSData *)getJsonDataWithObj:(id)obj;
+ (BOOL)isMemoryLimit;

+ (BOOL)checkFrequency:(NSMutableArray *)arrImpTimes freqMinutes:(int)freqMinutes freqCounts:(int)freqCounts;

+ (NSString *)generateLoadSuccessInfo:(NSString *)oldInfo curChannel:(NSString *)curChannel;
+ (NSString *)generateLoadFailInfo:(NSString *)oldInfo curChannel:(NSString *)curChannel errCode:(NSInteger)errCode;
+ (NSString *)getCustomEventClsName:(int)channelID adType:(MsADType)adType;

+ (NSString *)handleAdUnitId:(NSString *)adUnitId;
+ (BOOL)isScreenPortrait;
+ (void)changeCNValue:(id)cnObj;

+ (NSString *)generateAdUnitId:(NSDictionary *)wfItem;
+ (BOOL)hasMediationHelper;
+ (void)openMediationHelper;
+ (BOOL)mediationHelperIsOpening;
+ (UIViewController *)getTopRootViewController;
+ (UIWindow *)getTopWindow;
@end
