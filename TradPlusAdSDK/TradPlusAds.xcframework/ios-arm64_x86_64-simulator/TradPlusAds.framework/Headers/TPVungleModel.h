//
//  TPVungleModel.h
//  TradPlusAds
//
//  Created by Michael on 2025/7/18.
//  Copyright © 2025 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPVungleModel : NSObject<NSCoding>

@property (nonatomic, strong) NSString *value;

@property (nonatomic, strong) NSString *adUnitId;

@property (nonatomic, strong) NSDate *date;

- (instancetype)initWithValue:(NSString *)value adUnitId:(NSString *)adUnitId date:(NSDate *)date;

@end

NS_ASSUME_NONNULL_END
