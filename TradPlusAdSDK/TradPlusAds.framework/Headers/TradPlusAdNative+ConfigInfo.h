//
//  TradPlusAdNative+ConfigInfo.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusAdNative.h>

@interface TradPlusAdNative ()

- (void)refresh;
- (void)closeEvent;
- (void)setAdUnitID:(NSString *)adUnitID isAutoLoad:(BOOL)isAutoLoad;
@property (nonatomic,readonly)BOOL isSkip;
@property (nonatomic,readonly)NSInteger countdownTime;
@property (nonatomic,readonly)NSInteger skipTime;
@property (nonatomic,readonly)NSInteger refreshTime;
@property (nonatomic,readonly)BOOL delayClose;
@property (nonatomic,copy)void (^didCloseOtherControllerAct)(void);
@end
