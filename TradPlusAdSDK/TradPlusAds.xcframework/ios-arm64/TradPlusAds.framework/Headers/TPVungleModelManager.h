//
//  TPVungleModelManager.h
//  TradPlusAds
//
//  Created by Michael on 2025/7/18.
//  Copyright © 2025 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TPVungleModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPVungleModelManager : NSObject
+ (instancetype)sharedManager;

- (void)addTPVungleModel:(TPVungleModel *)model;

/// 获取指定广告位的所有模型
- (NSArray<TPVungleModel *> *)getAllTPVungleModelsForAdUnitId:(NSString *)adUnitId;

- (void)clearAllData;

/// 清空指定广告位的数据
- (void)clearDataForAdUnitId:(NSString *)adUnitId;

/// 清理指定广告位的过期数据
- (void)removeExpiredDataForAdUnitId:(NSString *)adUnitId;

/// 计算指定广告位的统计数据
- (NSDictionary<NSString *, NSNumber *> *)calculateStatisticsForAdUnitId:(NSString *)adUnitId;

@end

NS_ASSUME_NONNULL_END
