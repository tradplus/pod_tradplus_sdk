//
//  MsCommon.h
//
//  Created by ms-mac on 2016/12/1.
//  Copyright © 2016年 TradPlusAd All rights reserved.
//


#import <Foundation/Foundation.h>

static int const kMsSDKReqTimeout = 15;

extern NSString *gEventServerURL;
extern NSString *gAdconfServerURL;
extern BOOL gMsSDKDebugMode;
extern BOOL gMsSDKInited;
extern BOOL gMsSDKAllowWrite;
extern BOOL gMsSDKAuthUID;
extern BOOL gMsSDKIsCN;
extern int gMsEventInterval;
extern int gMsHTTPTimeout;
extern int gMsPayLoadTimeout;
extern NSString * const gConsentStatusStorageKey;
extern NSString * const gGDPRAppliesStorageKey;
extern NSString * const gEventServerDefaultURL;

extern NSString * const kTPCapHourLimit;
extern NSString * const kTPCapDayLimit;
extern NSString * const kTPPacingLimit;

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

typedef enum
{
    ADTYPE_BANNER,
    ADTYPE_NATIVE,
    ADTYPE_INTERSTITIAL,
    ADTYPE_REWARDEDVIDEO,
    ADTYPE_OFFERWALL,
    ADTYPE_SPLASH
} MsADType;

typedef enum
{
    EV_REQ_OPEN_API_START    = 100,
    EV_REQ_OPEN_API          = 200,
    EV_PRE_LOAD_ADCONF_START = 300,
    EV_PRE_LOAD_ADCONF       = 400,
    EV_LOAD_AD_START         = 500,
    EV_LOAD_AD               = 600,
    EV_BID_START             = 610,
    EV_BID_END               = 611,
    EV_BID_WIN               = 620,
    EV_BID_LOST              = 621,
    EV_LOAD_NETWORK_AD_START = 700,
    EV_LOAD_NETWORK_AD       = 800,
    EV_LOAD_FIRST_NETWORK_AD = 805,
    EV_LOAD_AD_RESULT        = 810,
    EV_NETWORK_AD_ISREADY    = 850,
    EV_IS_READY              = 900,
    EV_SHOW_AD_START         = 1000,
    EV_SHOW_AD               = 1100,
    EV_CLICK_AD              = 1200,
    EV_AD_VIDEO_START        = 1300,
    EV_BID_IMP               = 1320,
    EV_AD_VIDEO_CLOSE        = 1400,
    EV_AD_VIDEO_REWARD       = 1500,
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
    NETWORK_YOUDAO   = 25,     //有道
    NETWORK_HELIUM   = 30,
    NETWORK_MAIO     = 31,
    NETWORK_MYTARGET = 33,
    NETWORK_SMAATO   = 38,
    NETWORK_TPADX    = 40
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
+ (NSString *)channelID2Name:(int)channelID;
+ (NSString *)eventType2Str:(MSEventType)evid;
+ (BOOL)isMemoryLimit;

+ (BOOL)checkFrequency:(NSMutableArray *)arrImpTimes freqMinutes:(int)freqMinutes freqCounts:(int)freqCounts;

+ (NSString *)generateLoadSuccessInfo:(NSString *)oldInfo curChannel:(NSString *)curChannel;
+ (NSString *)generateLoadFailInfo:(NSString *)oldInfo curChannel:(NSString *)curChannel errCode:(NSInteger)errCode;
+ (NSString *)getCustomEventClsName:(int)channelID adType:(MsADType)adType;

+ (NSString *)handleAdUnitId:(NSString *)adUnitId;
+ (BOOL)isScreenPortrait;
+ (void)changeCNValue:(id)cnObj;

+ (NSString *)generateAdUnitId:(NSDictionary *)wfItem;
@end
