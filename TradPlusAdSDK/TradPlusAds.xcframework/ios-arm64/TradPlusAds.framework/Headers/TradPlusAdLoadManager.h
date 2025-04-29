//
//  TradPlusAdLoadManager.h
//  TradPlusAds
//
//  Created by xuejun on 2022/11/9.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdConfModel.h>
#import <TradPlusAds/TradPlusAdWaterfallItem.h>
#import <TradPlusAds/TradPlusBiddingManager.h>
#import <TradPlusAds/TradPlusBiddingTokenManager.h>

NS_ASSUME_NONNULL_BEGIN

@class TradPlusUnitManager;
@interface TradPlusAdLoadManager : NSObject

- (void)startLoadWithConfModel:(TradPlusAdConfModel *)confModel;

@property (nonatomic,assign)BOOL didUpload808;
@property (nonatomic,assign)BOOL didLoaded;
@property (nonatomic,strong)NSDictionary *localParams;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,assign)NSInteger cacheCount;
@property (nonatomic,assign)NSInteger parallelCount;
@property (nonatomic,strong)TradPlusBiddingManager *biddingManager;
@property (nonatomic,strong)TradPlusBiddingTokenManager *biddingTokenManager;

@property (nonatomic,assign)TPLoadMode loadMode;
@property (nonatomic,assign)BOOL waterfallFinish;
@property (nonatomic,copy)NSString *requestId;

@property (nonatomic,assign)CGFloat customBidPrice;
@property (nonatomic,assign)TPBidPriceCurrency customBidPriceCurrency;
@end

NS_ASSUME_NONNULL_END
