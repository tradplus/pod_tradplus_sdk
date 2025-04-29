//
//  TradPlusBottomManager.h
//  TradPlusAds
//
//  Created by xuejun on 2022/11/9.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/TradPlusAdLoadManager.h>

@interface TradPlusBottomManager : NSObject

- (void)startLoadWithConfModel:(TradPlusAdConfModel *)confModel;
- (TradPlusAdWaterfallItem *)getNextWaterfallItem;
- (void)closeTimer;

//加载过程中加载成功回调（在限制时间后）
@property (nonatomic, copy) void (^bottomItemLoaded)(TradPlusAdWaterfallItem *bottomItem);
@property (nonatomic, copy) void (^finishLoadAct)(void);

@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,weak)TradPlusAdLoadManager *loadManager;
@property (nonatomic,strong)TradPlusAdWaterfallItem *loadedItem;

/// 0 = 未启动, 1=运行中 ,2 = 完成
@property (nonatomic,assign)NSInteger state;
@property (nonatomic,assign)BOOL inWaitTime;
@property (nonatomic,assign)BOOL didCallbackOneLayerLoaded;
@end
