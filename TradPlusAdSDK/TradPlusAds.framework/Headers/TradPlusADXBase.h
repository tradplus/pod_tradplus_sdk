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

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXBase : NSObject

@property (nonatomic,assign)BOOL isLoading;
@property (nonatomic,assign)BOOL willRelease;
@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,strong)NSMutableArray <TradPlusReportTask *>*reportTaskArray;
@property (nonatomic,strong)TPADXResourceData *resourceData;
@property (nonatomic,strong)NSDate *loadFinishDate;
@property (nonatomic,strong)NSDate *finishBiddingDate;

- (void)downloadWithMediaFileURL:(NSString *)mediaFileURL callback:(void (^)(NSError *error))callback;
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
- (void)reportClickArray:(NSArray <NSURL *>*)clickArray;
- (void)reportShowArray:(NSArray <NSURL *>*)showArray;
- (void)checkRelease;
- (void)clear;

- (NSError *)placementIDError;
- (NSError *)payLoadError;
- (NSError *)payLoadExpired;
- (NSError *)downloadVideoTimeOutError;
- (NSError *)downloadVideoError;
- (NSError *)downloadImageError;

- (void)loadVideoOnly;
- (void)loadVideoAndEndCard;
- (void)checkAllFinish;
@end

NS_ASSUME_NONNULL_END
