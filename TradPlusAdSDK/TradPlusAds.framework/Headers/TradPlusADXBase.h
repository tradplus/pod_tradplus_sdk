//
//  TradPlusADXBase.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/19.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TradPlusADXReportManager.h"
#import "TradPlusReportTask.h"

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusADXBase : NSObject

@property (nonatomic,assign)BOOL isLoading;
@property (nonatomic,assign)BOOL willRelease;
@property (nonatomic,copy)NSString *placementId;
@property (nonatomic,assign)NSInteger adValidTime;
@property (nonatomic,strong)NSMutableArray <TradPlusReportTask *>*reportTaskArray;


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

@end

NS_ASSUME_NONNULL_END
