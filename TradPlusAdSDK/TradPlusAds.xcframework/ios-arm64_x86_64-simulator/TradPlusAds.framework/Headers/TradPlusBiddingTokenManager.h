//
//  TradPlusC2SBiddingManager.h
//  TradPlusAds
//
//  Created by xuejun on 2022/5/5.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/TradPlusAdConfModel.h>
#import <TradPlusAds/TradPlusMutableArray.h>

@class TradPlusUnitManager;
@interface TradPlusBiddingTokenManager : NSObject

- (void)getBiddingTokenWithConfig:(TradPlusAdConfModel *)config callback:(void (^)(NSError *error))callback;

- (TradPlusAdWaterfallItem *)getC2SItemWithAdsourceID:(NSString *)adsourceID;
- (TradPlusAdWaterfallItem *)getS2SItemWithAdsourceID:(NSString *)adsourceID;
- (void)updataTopPrice:(NSString *)topPrice topPriceCNY:(NSString *)topPriceCNY adsourceId:(NSString *)adsourceId;
- (void)clear;

@property (nonatomic,weak)TradPlusUnitManager *unitManager;

@property (nonatomic,strong)TradPlusMutableArray *finishC2SBiddingArray;
@property (nonatomic,readonly)TradPlusMutableArray *adsourceplacements;
@property (nonatomic,readonly)NSMutableArray <TradPlusAdWaterfallItem *> *biddingArray;
@property (nonatomic,assign)BOOL hasADX;
@property (nonatomic,assign)BOOL mainThreadRelease;

@property (nonatomic, copy) void (^biddingItemStart)(TradPlusAdWaterfallItem *biddingItem);
///C2S Error
@property (nonatomic, copy) void (^C2SbiddingItemError)(TradPlusAdWaterfallItem *biddingItem,NSInteger errorCode,NSString *errorStr);
///S2S Error
@property (nonatomic, copy) void (^biddingItemEnd)(TradPlusAdWaterfallItem *biddingItem,NSInteger errorCode,NSError *error,NSInteger nbr);
@end
