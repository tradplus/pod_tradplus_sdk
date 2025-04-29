//
//  TPLoadCallbackService.h
//  TradPlusAds
//
//  Created by xuejun on 2023/6/16.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusUnitManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPLoadCallbackService : NSObject

- (void)startCountdownWithTime:(NSTimeInterval)time;

@property (nonatomic,assign)BOOL userCallback;
@property (nonatomic,weak)TradPlusUnitManager *unitManager;
@property (nonatomic,assign)BOOL canCallback;
@property (nonatomic,assign)BOOL autoLoadCallback;
@property (nonatomic, copy) void (^countDownFinish)(TradPlusAdWaterfallItem *item);
@end

NS_ASSUME_NONNULL_END
