//
//  TradPlusADXBase.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/19.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusADXReportManager.h>
#import <TradPlusAds/TradPlusReportTask.h>
#import <TradPlusAds/TPADXResourceData.h>
#import <StoreKit/StoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXBase : NSObject

@property (nonatomic,assign)BOOL isLoading;
@property (nonatomic,assign)BOOL willRelease;
@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,strong)NSMutableArray <TradPlusReportTask *>*reportTaskArray;
@property (nonatomic,strong)TPADXResourceData *resourceData;
@property (nonatomic,strong)NSDate *loadFinishDate;
@property (nonatomic,strong)NSDate *finishBiddingDate;
@property (nonatomic,copy)NSString *ecpm;
@property (nonatomic,assign)BOOL parseCNData;
@property (nonatomic,strong)SKStoreProductViewController *_Nullable storeViewController;

- (void)startLoadEvent;
- (void)finishLoadEvent:(NSString *)errorCode;
- (void)startLoadVideoEvent;
- (void)finishLoadVideoEvent:(NSString *)errorCode;
- (void)startLoadImageEvent;
- (void)finishLoadImageEvent:(NSString *)errorCode;
- (void)adReadyEvent:(NSString *)code;
- (void)startShowEvent;
- (void)finishShowEvent:(NSString *)errorCode;
- (void)clickEvent:(BOOL)canOpen;
- (void)holdUpClickEvent:(BOOL)holdUp;
- (void)reportClickArray:(NSArray <NSURL *>*)clickArray;
- (void)reportShowArray:(NSArray <NSURL *>*)showArray;
- (void)checkRelease;
- (void)clear;
- (void)trackSKAdNetworkStartImpression;
- (void)trackSKAdNetworkEndImpression;
- (BOOL)clickWithURL:(NSURL *)url viewController:(nullable UIViewController *)viewController;
- (BOOL)clickWithURL:(NSURL *)url;

- (NSError *)placementIDError;
- (NSError *)payLoadError;
- (NSError *)payLoadExpired;
- (NSError *)downloadVideoTimeOutError;
- (NSError *)downloadVideoError;
- (NSError *)downloadImageError;
@end

NS_ASSUME_NONNULL_END
