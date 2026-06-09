//
//  TradPlusSmartStrategyPool.h
//  TradPlusAds
//
//  Created by Cursor on 2026/5/27.
//  Copyright © 2026 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>
#import <TradPlusAds/TradPlusAdConfModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSmartStrategyPool : NSObject

@property (nonatomic, weak) TradPlusUnitManager *mainUnitManager;

- (instancetype)initWithMainUnitManager:(TradPlusUnitManager *)mainUnitManager confModel:(TradPlusAdConfModel *)confModel;
- (void)startLoad;

- (void)mainDidFirstLoadedWithItem:(TradPlusAdWaterfallItem *)item;
- (void)mainDidAllLoadedWithSuccess:(BOOL)success code:(NSInteger)code loadedCount:(NSInteger)loadedCount requestId:(NSString *)requestId;
- (void)mainDidAllLoadedWithCode:(NSInteger)code requestId:(NSString *)requestId;
- (void)mainDidLoadFailWithError:(NSError *)error;

- (BOOL)checkReady;
- (NSInteger)readyAdCount;
- (nullable NSDictionary *)getBestInfoWithItem:(nullable TradPlusAdWaterfallItem *)item;
- (TradPlusAdWaterfallItem *)getBestItemWithItem:(nullable TradPlusAdWaterfallItem *)item noCheck:(BOOL)noCheck;
- (TradPlusAdWaterfallItem *)getBestItemWithItem:(nullable TradPlusAdWaterfallItem *)item;

@end

NS_ASSUME_NONNULL_END
