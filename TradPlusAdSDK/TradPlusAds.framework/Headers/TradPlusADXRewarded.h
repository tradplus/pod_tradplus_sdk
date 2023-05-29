//
//  TradPlusADXRewarded.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/15.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TradPlusADXBase.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TradPlusADXRewardedDelegate;

@interface TradPlusADXRewarded : TradPlusADXBase

- (void)loadWithPayload:(NSDictionary *)payload finishBiddingDate:(NSDate *)finishBiddingDate;

- (void)showAdFromRootViewController:(UIViewController *)rootViewController;
@property (nonatomic,assign) BOOL isMute;
@property (nonatomic,weak) id <TradPlusADXRewardedDelegate> delegate;
- (BOOL)isReady;
@end

@protocol TradPlusADXRewardedDelegate <NSObject>

- (void)ADXLoadFinish;
- (void)ADXLoadFailWithError:(NSError *)error;
- (void)ADXImpression;
- (void)ADXShowFailWithError:(NSError *)error;
- (void)ADXClicked;
- (void)ADXDismissed;
- (void)ADXReward;
@end

NS_ASSUME_NONNULL_END
