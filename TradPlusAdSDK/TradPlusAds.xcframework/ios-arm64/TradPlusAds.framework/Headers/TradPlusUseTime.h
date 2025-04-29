//
//  TradPlusUseTime.h
//  TradPlusAds
//
//  Created by xuejun on 2022/8/15.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusUseTime : NSObject

+ (TradPlusUseTime *)sharedInstance;
- (void)start;
- (void)uploadHis;
- (void)onCrash;
- (void)send150;

@property (nonatomic,assign)NSInteger interval;
@end

NS_ASSUME_NONNULL_END
