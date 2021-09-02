//
//  TradPlusAdNative+ConfigInfo.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import "TradPlusAdWaterfallItem.h"

@interface TradPlusAdNative ()

@property (nonatomic,readonly)BOOL isSkip;
@property (nonatomic,readonly)NSInteger countdownTime;
@property (nonatomic,readonly)NSInteger skipTime;
@property (nonatomic,readonly)NSInteger refreshTime;
@property (nonatomic,copy)void (^didCloseOtherControllerAct)(void);
@end
