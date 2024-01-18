//
//  TPADXResourceData.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/15.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTResponse.h>
#import <TradPlusAds/TPADXWebView.h>
#import <TradPlusAds/TPADXOMSession.h>
#import <TradPlusAds/TPADXCNData.h>
#import <AVFoundation/AVAsset.h>

@class TradPlusADXBase;
@class TPADXNativeData;
NS_ASSUME_NONNULL_BEGIN

@interface TPADXResourceData : NSObject

- (instancetype)initWithPayload:(NSDictionary *)payload parseCNData:(BOOL)parseCNData;

- (void)setupOMWebViewSession:(WKWebView *)webView;
- (void)setupVideoSession;
- (void)setupNativeSession;

- (void)loadRewardedResourceWithADXBase:(TradPlusADXBase *)base;
- (void)loadInterstitialResourceWithADXBase:(TradPlusADXBase *)base;
- (void)loadNativeResourceWithADXBase:(TradPlusADXBase *)base;
- (void)loadNativeBannerResourceWithADXBase:(TradPlusADXBase *)base adSize:(CGSize)adSize;
- (void)loadNativeSplashResourceWithADXBase:(TradPlusADXBase *)base;
- (void)loadInterstitialSplashResourceWithADXBase:(TradPlusADXBase *)base;
- (void)loadInStreamResourceWithADXBase:(TradPlusADXBase *)base;

//CN
- (void)loadCNSplashWithADXBase:(TradPlusADXBase *)base;

@property (nonatomic, copy) void (^loadFailedAct)(NSError *error);
@property (nonatomic, copy) void (^loadFinishAct)(void);

@property (nonatomic,assign)BOOL openOMID;
@property (nonatomic,strong)TPADXOMSession *OMSession;
@property (nonatomic,assign)BOOL isMREC;
@property (nonatomic,strong)TPADXNativeData *nativeData;

@property (nonatomic,readonly) NSString *adm;
@property (nonatomic,assign) NSInteger exp;
@property (nonatomic,strong) NSArray *nurl;
@property (nonatomic,strong) NSArray *lurl;
@property (nonatomic,strong) NSArray *impurl;
@property (nonatomic,strong) NSArray *burl;
@property (nonatomic,strong) NSArray *clkurl;

@property (nonatomic,assign)NSInteger app_id;
@property (nonatomic,assign)NSInteger adseat_id;
@property (nonatomic,assign)NSInteger bucket_id;
@property (nonatomic,assign)NSInteger segment_id;
@property (nonatomic,assign)NSInteger asp_id;
@property (nonatomic,assign)NSInteger dsp_account_id;
//1 原生 ；2 插屏; 5 激励视频 0默认不处理
@property (nonatomic,assign)NSInteger dsp_ad_type;

@property (nonatomic,strong)TPADXVASTResponse *VASTResponse;
@property (nonatomic,copy)NSString *videoRemoteURL;
@property (nonatomic,copy)NSString *videoLocalURL;
@property (nonatomic,assign)NSTimeInterval videoDuration;
@property (nonatomic,assign)NSInteger videoWidth;
@property (nonatomic,assign)NSInteger videoHeight;


@property (nonatomic,strong)NSArray <NSURL *>*errorURLArray;
@property (nonatomic,strong)NSArray <NSURL *>*impressionURLArray;
@property (nonatomic,strong)NSArray <NSURL *>*videoClickURLArray;
@property (nonatomic,strong)NSURL *videoClickThroughURL;
@property (nonatomic,strong)NSDictionary<TPADXVideoEvent, NSArray<TPADXVASTTrackingEvent *> *> *videoTrackingEvents;
@property (nonatomic,strong)TPADXVASTCompanionAd *videoCompanionAd;
@property (nonatomic,copy)NSString *endCardRemoteURL;
@property (nonatomic,copy)NSString *endCardLocalURL;

@property (nonatomic,assign)NSInteger showSkipMinTime;
@property (nonatomic,assign)NSInteger skipTime;

@property (nonatomic,assign)NSInteger interstitialVideoSkipTime;
@property (nonatomic,assign)NSInteger endCardCloseTime;
@property (nonatomic,assign)NSInteger filterRatio;


@property (nonatomic,assign)NSInteger rewardedMinTime;
@property (nonatomic,assign)BOOL hasReward;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,readonly)BOOL isVideoResource;
@property (nonatomic,strong)TPADXWebView *imageView;

@property (nonatomic,assign)BOOL checkVisible;
@property (nonatomic,assign)NSInteger minAreaRatio;
@property (nonatomic,assign)NSInteger minDuration;

@property (nonatomic,assign)NSInteger iscn;
@property (nonatomic,strong)NSDictionary *bidcn;
@property (nonatomic,strong)TPADXCNData *cnData;
@property (nonatomic,assign)BOOL parseCNData;

@property (nonatomic,assign)BOOL useVideoStreaming;
@property (nonatomic,strong)AVAsset *inStreamAsset;
@end

NS_ASSUME_NONNULL_END
