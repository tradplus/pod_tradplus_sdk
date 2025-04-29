//
//  TradPlusWaitingPool.h
//  TradPlusAds
//
//  Created by xuejun on 2024/1/5.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>

NS_ASSUME_NONNULL_BEGIN

@class TradPlusUnitManager;
@interface TradPlusWaitingPool : NSObject

+ (TradPlusWaitingPool *)sharedInstance;
- (void)addItem:(TradPlusAdWaterfallItem *)item;
- (void)removeItem:(TradPlusAdWaterfallItem *)item;

@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,assign)BOOL closeWaitMode;
@end

NS_ASSUME_NONNULL_END
