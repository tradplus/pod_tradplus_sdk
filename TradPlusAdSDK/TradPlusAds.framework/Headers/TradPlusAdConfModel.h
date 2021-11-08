//
//  MSAdConfModel.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/6.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TradPlusDataModel.h"

@interface TradPlusAdConfModel : TradPlusDataModel<NSCopying>

@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,copy)NSString *segmentTag;
@property (nonatomic,copy)NSString *bucketId;
@property (nonatomic,strong)NSDictionary *dicUserInfo;

@property (nonatomic,strong)NSDate *startLoadDate;
@property (nonatomic,assign)BOOL isLoading;

@property (nonatomic,assign)NSInteger resp_time;
@property (nonatomic,copy)NSString *resp_uid;
@property (nonatomic,assign)NSInteger expires;
@property (nonatomic,copy)NSString *adType;
@property (nonatomic,strong)NSDictionary *rewardedInfo;

@property (nonatomic,assign)NSInteger secType;
//是否为中国大陆或中国香港
@property (nonatomic,assign)NSInteger cn;
@property (nonatomic,copy)NSString *bucket_id;
@property (nonatomic,copy)NSString *segment_id;
//缓存数
@property (nonatomic,assign)NSInteger cacheNum;
@property (nonatomic,strong)NSArray *waterfall;
@property (nonatomic,strong)NSArray *biddingwaterfall;

@property (nonatomic,assign)NSInteger is_skip;
@property (nonatomic,assign)NSInteger countdown_time;
@property (nonatomic,assign)NSInteger skip_time;

//自动刷新间隔
@property (nonatomic,assign)NSInteger refreshTime;

//biddingTimeout 超时时间
@property (nonatomic,assign)NSInteger biddingTimeout;

@property (nonatomic,strong)NSDictionary *frequency;
@property (nonatomic,assign)NSInteger frequencyTime;
@property (nonatomic,assign)NSInteger frequencyLimit;//次数

@property (nonatomic,strong)NSDictionary *originalConfigDictionary;

@end
