//
//  TPCapPacingManager.h
//  TradPlusAds
//
//  Created by ms-mac on 2021/7/2.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPCapPacingManager : NSObject
+ (instancetype)sharedInstance;

- (void)increaseCapWithAdUnitId:(NSString *)adUnitId;
- (int)capOfDayWithAdUnitId:(NSString *)adUnitId;
- (int)capOfHourWithAdUnitId:(NSString *)adUnitId;

- (void)setShowTimeOfAdUnitId:(NSString *)adUnitId;
- (NSDate *)lastShowTimeOfAdUnitId:(NSString *)adUnitId;

- (BOOL)validateCapForLimitOfAdUnitId:(NSString *)capUnitId dicFrequency:(NSDictionary *)dicFrequency;
@end

NS_ASSUME_NONNULL_END
