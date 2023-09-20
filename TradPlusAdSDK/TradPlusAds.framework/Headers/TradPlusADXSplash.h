//
//  TradPlusADXSplash.h
//  TradPlusAds
//
//  Created by xuejun on 2023/2/10.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusAds.h>

@protocol TPADXSplashDelegate;

@interface TradPlusADXSplash : TradPlusADXBase

- (BOOL)isReady;
- (void)loadWithPayload:(NSDictionary *)payload finishBiddingDate:(NSDate *)finishBiddingDate;
- (void)showAdWithBottomView:(UIView *)bottomView;

@property (nonatomic,weak) id <TPADXSplashDelegate> delegate;
@property (nonatomic,assign) BOOL isMute;
@property (nonatomic,assign)BOOL isSkip;
@property (nonatomic,assign)NSInteger countdownTime;
@property (nonatomic,assign)NSInteger skipTime;

@property (nonatomic,readonly)NSDictionary *bidcn;
@end

@protocol TPADXSplashDelegate <NSObject>

- (void)ADXLoadFinish;
- (void)ADXLoadFailWithError:(NSError *)error;
- (void)ADXImpression;
- (void)ADXShowFailWithError:(NSError *)error;
- (void)ADXClicked;
- (void)ADXDismissed;
@end
