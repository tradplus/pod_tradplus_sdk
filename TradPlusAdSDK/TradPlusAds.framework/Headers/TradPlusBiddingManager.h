//
//  TradPlusBiddingManager.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/31.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/TradPlusAdConfModel.h>
#import <TradPlusAds/TradPlusAdUnitCache.h>

@class TradPlusUnitManager;
@interface TradPlusBiddingManager : NSObject

- (void)startBiddingWithWithConfig:(TradPlusAdConfModel *)config callback:(void (^)(NSMutableArray <TradPlusAdWaterfallItem *>*waterfallArray,NSError *error))callback;
- (void)sendLossWithItem:(TradPlusAdWaterfallItem *)item loadFail:(BOOL)loadFail;
- (void)sendWinWithItem:(TradPlusAdWaterfallItem *)item;
- (void)sendImpressionWithItem:(TradPlusAdWaterfallItem *)item;
- (void)removeItem:(TradPlusAdWaterfallItem *)item;
- (void)updataTopPrice:(NSString *)topPrice adsourceId:(NSString *)adsourceId;
- (void)clear;

@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,assign)NSInteger topWaterfallIndex;
@property (nonatomic,assign)MsADType adType;
@property (nonatomic, copy) void (^biddingItemStart)(TradPlusAdWaterfallItem *biddingItem);
@property (nonatomic, copy) void (^biddingItemEnd)(TradPlusAdWaterfallItem *biddingItem,NSInteger errorCode,NSError *error,NSInteger nbr);
@end
