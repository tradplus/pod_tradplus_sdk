//
//  MsWaterfallItem.h
//  TradPlusAds
//
//  Created by ms-mac on 2020/11/11.
//  Copyright © 2020 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum
{
    ADSOURCESTATE_UNKNOWN,
    ADSOURCESTATE_LOADING,
    ADSOURCESTATE_LOADED
} MsAdSourceState;

@interface MsWaterfallItem : NSObject
@property (nonatomic) BOOL isHeadBidding;
@property (nonatomic) double bidPrice;

@end

NS_ASSUME_NONNULL_END
