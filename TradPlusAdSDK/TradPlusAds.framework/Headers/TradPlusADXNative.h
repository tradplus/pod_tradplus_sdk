//
//  TradPlusADXNative.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/26.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusADXBase.h>
#import <TradPlusAds/TPADXNativeData.h>
#import <TradPlusAds/TPADXNativeVideoView.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPADXNativeDelegate;

@interface TradPlusADXNative : TradPlusADXBase

- (BOOL)isReady;

- (void)registerContainer:(UIView *)containerView
       withClickableViews:(NSArray<UIView *> *_Nullable)clickableViews;

- (void)loadWithPayload:(NSDictionary *)payload finishBiddingDate:(NSDate *)finishBiddingDate;

@property (nonatomic,assign) BOOL isMute;
@property (nonatomic,weak) id <TPADXNativeDelegate> delegate;
@property (nonatomic,strong)TPADXNativeData *nativeData;
@end

@protocol TPADXNativeDelegate <NSObject>

- (void)ADXLoadFinish:(TPADXNativeData *)nativeData videoView:(TPADXNativeVideoView *)videoView;
- (void)ADXLoadFailWithError:(NSError *)error;
- (void)ADXImpression;
- (void)ADXShowFailWithError:(NSError *)error;
- (void)ADXClicked;
@end

NS_ASSUME_NONNULL_END
