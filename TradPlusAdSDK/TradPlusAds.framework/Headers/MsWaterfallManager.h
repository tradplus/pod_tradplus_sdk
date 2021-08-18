//
//  MsWaterfallManager.h
//  TradPlusAds
//
//  Created by ms-mac on 2021/2/18.
//  Copyright © 2021 TradPlusAd All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum {
    TPAdTypeUnknown      = -1,
    TPAdTypeBanner       = 0,
    TPAdTypeNative       = 1,
    TPAdTypeInterstitial = 2,
    TPAdTypeRewarded     = 3
} TPAdType;

@protocol MsWaterfallManagerDelegate <NSObject>
@optional
- (void)bidComplete:(NSDictionary *)dicStrategy;
- (void)fbBidSuccess;
@end

@interface MsWaterfallManager : NSObject
@property (nonatomic, strong) NSMutableDictionary *dicStrategy;
@property (nonatomic, strong) NSMutableArray *arrStrategyBid;
@property (nonatomic, weak, nullable) id<MsWaterfallManagerDelegate> delegate;
@property (nonatomic, strong) NSString *placementID;
@property (nonatomic, strong) NSString *segmentId;
@property (nonatomic, strong) NSString *bucketId;
@property (nonatomic, strong) NSString *requestID;
@property (nonatomic, strong) NSMutableDictionary *dicAsuidBidResItem; //only success
@property (nonatomic, strong) NSMutableDictionary *dicAsuidBidResItemExpired;
@property (nonatomic, strong) NSMutableDictionary *dicAsuidBidWFItem;
@property (nonatomic, assign) TPAdType adtype;
@property (nonatomic, assign) int ecpmPriceIndex;

- (BOOL)checkWaterfall;
- (void)internalBid;
- (void)cleanExpiredPayLoad:(NSString *)requestId clearPrice:(int)clearPriceIndex;
- (void)removeBidResItem:(NSNumber *)asuid;
@end

NS_ASSUME_NONNULL_END
