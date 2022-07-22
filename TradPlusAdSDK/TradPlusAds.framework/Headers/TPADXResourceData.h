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

NS_ASSUME_NONNULL_BEGIN

@interface TPADXResourceData : NSObject

- (instancetype)initWithPayload:(NSDictionary *)payload;

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

@property (nonatomic,strong)TPADXVASTResponse *VASTResponse;
@property (nonatomic,copy)NSString *videoRemoteURL;
@property (nonatomic,copy)NSString *videoLocalURL;
@property (nonatomic,assign)NSInteger videoDuration;
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
@property (nonatomic,assign)NSInteger rewardedMinTime;
@property (nonatomic,assign)BOOL hasReward;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,readonly)BOOL isVideoResource;
@property (nonatomic,strong)TPADXWebView *imageView;
@end

NS_ASSUME_NONNULL_END
