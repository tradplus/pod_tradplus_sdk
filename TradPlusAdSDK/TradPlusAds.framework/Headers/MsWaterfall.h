//
//  MsWaterfall.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/11/11.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MsWaterfall : NSObject

@property (nonatomic, strong) NSMutableArray *wfItems;

- (NSString *)getAdUnitIdToShow;
- (void)updateItem:(NSString *)adUnitId isHB:(BOOL)isHB;
@end

NS_ASSUME_NONNULL_END
