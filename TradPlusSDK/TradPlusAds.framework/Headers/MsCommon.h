//
//  MsCommon.h
//  TradPlusDemo
//
//  Created by ms-mac on 2016/12/1.
//  Copyright © 2016年 TradPlus. All rights reserved.
//


#import <Foundation/Foundation.h>

//static NSString * const kAdServerURL = @"https://xf.adserver.adexpress.com";
//static NSString * const kTrackServerURL = @"https://xf.tracking.adexpress.com";
static int const kMsSDKReqTimeout = 15;


extern NSString *gEventServerURL;
extern NSString *gAdconfServerURL;
extern BOOL gMsSDKDebugMode;
extern BOOL gMsSDKInited;
extern NSString * const gConsentStatusStorageKey;
extern NSString * const gGDPRAppliesStorageKey;


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
    EV_LOAD_NETWORK_AD_START = 700,
    EV_LOAD_NETWORK_AD       = 800,
    EV_LOAD_AD_RESULT        = 810,
    EV_NETWORK_AD_ISREADY    = 850,
    EV_IS_READY              = 900,
    EV_SHOW_AD_START         = 1000,
    EV_SHOW_AD               = 1100,
    EV_CLICK_AD              = 1200,
    EV_AD_VIDEO_START        = 1300,
    EV_AD_VIDEO_CLOSE        = 1400,
    //custom
    EV_APP_CRASH             = 10086
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
    NETWORK_APPLOVIN = 9,
    NETWORK_IRONSOURCE,
    NETWORK_INMOBI,
    NETWORK_SMAATO,
    NETWORK_ADEXPRESS,
    NETWORK_MOBFOX,
    NETWORK_CHARTBOOST,
    NETWORK_GDTMOB,
    NETWORK_BYTEDANCE,
    NETWORK_MINTEGRAL,
    NETWORK_PANGLE,
    NETWORK_KUAISHOU,
    NETWORK_SIGMOB
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
@end
