//
//  TradPlusSharedPool.h
//  TradPlusAds
//
//  Created by xuejun on 2024/8/9.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSharedPool : NSObject

@property (nonatomic,strong)TradPlusUnitManager *unitManager;
- (TradPlusAdWaterfallItem *)getBestItemWithItem:(TradPlusAdWaterfallItem *)item noCheck:(BOOL)noCheck;
- (TradPlusAdWaterfallItem *)getBestItemWithItem:(TradPlusAdWaterfallItem *)item;
- (NSDictionary *)getBestInfoWithItem:(TradPlusAdWaterfallItem *)item;
@end

NS_ASSUME_NONNULL_END
