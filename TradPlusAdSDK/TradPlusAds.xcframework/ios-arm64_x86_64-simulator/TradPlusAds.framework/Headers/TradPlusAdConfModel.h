//
//  MSAdConfModel.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/6.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusDataModel.h>

@interface TradPlusAdConfModel : TradPlusDataModel<NSCopying>

@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,copy)NSString *segmentTag;
@property (nonatomic,strong)NSDictionary *dicUserInfo;

@property (nonatomic,strong)NSDate *startLoadDate;
@property (nonatomic,assign)BOOL isLoading;

@property (nonatomic,assign)NSInteger resp_time;
@property (nonatomic,copy)NSString *resp_uid;
@property (nonatomic,assign)NSInteger expires;
@property (nonatomic,copy)NSString *adType;
@property (nonatomic,strong)NSDictionary *rewardedInfo;
@property (nonatomic,assign)NSInteger code;

@property (nonatomic,assign)NSInteger secType;
//是否为中国大陆或中国香港
@property (nonatomic,assign)NSInteger cn;
@property (nonatomic,copy)NSString *bucket_id;
@property (nonatomic,copy)NSString *segment_id;
//原缓存数 v10.5.0后定义为并行数
@property (nonatomic,assign)NSInteger cacheNum;
//缓存数
@property (nonatomic,assign)NSInteger minCache;
@property (nonatomic,strong)NSArray *waterfall;
@property (nonatomic,strong)NSArray *biddingwaterfall;
@property (nonatomic,strong)NSArray *c2sbiddingwaterfall;

//兜底
@property (nonatomic,assign)CGFloat bottomWaitTime;
@property (nonatomic,strong)NSArray *bottomwaterfall;

@property (nonatomic,assign)NSInteger is_skip;
@property (nonatomic,assign)NSInteger countdown_time;
@property (nonatomic,assign)NSInteger skip_time;

//自动刷新间隔
@property (nonatomic,assign)NSInteger refreshTime;

//biddingTimeout 超时时间
@property (nonatomic,assign)CGFloat biddingTimeout;
@property (nonatomic,strong)NSDictionary *frequency;
@property (nonatomic,assign)NSInteger frequencyTime;
@property (nonatomic,assign)NSInteger frequencyLimit;//次数
@property (nonatomic,assign)BOOL isNewFrequency;//v11.1.0新增 true使用中介组频限

@property (nonatomic,strong)NSDictionary *originalConfigDictionary;

@property (nonatomic,assign)NSInteger is_test_mode;
@property (nonatomic,assign)NSInteger nobid;
@property (nonatomic,assign)NSInteger is_hybrid_setup;
//是否服务端奖励回调
@property (nonatomic,assign)NSInteger is_server_callback;

@property (nonatomic,assign)NSInteger is_server_imp_callback;

@property (nonatomic,assign)NSInteger ad_fill_callback;

@property (nonatomic,assign)NSInteger createTime;
//waterfall是否为空：0否 1是
@property (nonatomic,assign)NSInteger is_nothing;

//max wating time v9.6.0新增
@property (nonatomic,assign)CGFloat loadMaxWaitTime;
//11.4.0 价值分层新增
@property (nonatomic,assign)CGFloat uvaMinValue;
@property (nonatomic,assign)CGFloat uvaMaxValue;
@property (nonatomic,assign)NSInteger uvaMaxCount;
//0 无，1均价，2最大值，3用户传入
@property (nonatomic,assign)NSInteger uvaEstimateType;
@property (nonatomic,strong)NSArray *uvaList;

@property (nonatomic,assign)BOOL closeAutoLoad;

@property (nonatomic,strong)NSString *share_adunit_id;
@property (nonatomic,assign)NSInteger restrain_time;
@property (nonatomic,assign)NSInteger restrain_limit;

//是否冷启动配置 1=YES 0=NO
@property (nonatomic,assign)NSInteger scene_type;

//v13.9.10新增 广告位请求间隔控制配置（共享广告位）
//1 开启，非1 关闭
@property (nonatomic,assign)NSInteger sharedPool_request_interval_status;
@property (nonatomic,assign)NSInteger sharedPool_request_interval;
@property (nonatomic,assign)NSInteger share_adunit_request_sec;

//v13.9.10新增 广告位自动加载重试配置
@property (nonatomic,strong)NSMutableArray *autoLoadConfig;

@end
