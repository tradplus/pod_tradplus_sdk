//
//  TradPlusWaterfallManager.h
//  TradPlusAds
//
//  Created by xuejun on 2022/11/11.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/TradPlusAdLoadManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusWaterfallManager : NSObject

- (void)startLoad;
- (TradPlusAdWaterfallItem *)getNextWaterfallItem;

@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,weak)TradPlusAdLoadManager *loadManager;
@property (nonatomic,strong)TradPlusBiddingManager *biddingManager;
@property (nonatomic,assign)NSInteger cacheCount;
@property (nonatomic,assign)NSInteger parallelCount;
@property (nonatomic,strong)NSMutableArray <TradPlusAdWaterfallItem *>*waterfallArray;
@property (nonatomic, copy) void (^finishLoadAct)(BOOL success);

/// 0 = 未启动, 1=运行中 ,2 = 完成
@property (nonatomic,assign)NSInteger state;
@property (nonatomic,assign)NSInteger loadedCount;
@end

NS_ASSUME_NONNULL_END
