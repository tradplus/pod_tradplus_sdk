//
//  TPCrossAd.h
//  fluteSDKSample
//
//  Created by ms-mac on 2021/8/27.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MsCommon.h>
#import "TPCrossEvent.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TPCrossAdDelegate;

//交叉推广
@interface TPCrossAd : NSObject
@property (nonatomic, assign) MsADType adType;
@property (nonatomic, assign, readonly) BOOL isAdReady;
@property (nonatomic, weak, nullable) id<TPCrossAdDelegate> delegate;

- (void)loadAd:(NSDictionary *)adInfo;
- (void)showAdFromViewController:(UIViewController *)viewController;
@end

@protocol TPCrossAdDelegate <NSObject>
@optional

- (void)crossAdDidLoadForAdUnitID:(NSString *)adUnitID;
- (void)crossAdDidFailToLoadForAdUnitID:(NSString *)adUnitID error:(NSError *)error;
- (void)crossAdDidExpireForAdUnitID:(NSString *)adUnitID;
- (void)crossAdDidFailToShowForAdUnitID:(NSString *)adUnitID error:(NSError *)error;
- (void)crossAdWillPresentForAdUnitID:(NSString *)adUnitID;
- (void)crossAdDidPresentForAdUnitID:(NSString *)adUnitID;
- (void)crossAdWillDismissForAdUnitID:(NSString *)adUnitID;
- (void)crossAdDidDismissForAdUnitID:(NSString *)adUnitID;
- (void)crossAdDidReceiveTapEventForAdUnitID:(NSString *)adUnitID;
- (void)crossAdWillLeaveApplicationForAdUnitID:(NSString *)adUnitID;
- (void)crossAdShouldRewardForAdUnitID:(NSString *)adUnitID;
@end
NS_ASSUME_NONNULL_END
