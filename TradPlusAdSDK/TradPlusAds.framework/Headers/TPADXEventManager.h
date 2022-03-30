//
//  TPADXEventManager.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/22.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum
{
    EV_ADX_INIT_SDK    = 5100,
    EV_ADX_LOAD_START  = 5700,
    EV_ADX_LOAD_END    = 5800,
    EV_ADX_DOWNLOAD_VIDEO_START = 5830,
    EV_ADX_DOWNLOAD_VIDEO_END   = 5840,
    EV_ADX_DOWNLOAD_IMAGE_START = 5850,
    EV_ADX_DOWNLOAD_IMAGE_END   = 5860,
    EV_ADX_IS_ADREADY  = 5900,
    EV_ADX_SHOW_START  = 6000,
    EV_ADX_SHOW_END    = 6100,
    EV_ADX_SHOW_TRACK_START = 6145,
    EV_ADX_SHOW_TRACK_END   = 6150,
    EV_ADX_CLICK_START = 6200,
    EV_ADX_CLICK_END   = 6230,
    EV_ADX_OPEN_APP    = 6240,
    EV_ADX_CLICK_TRACK_START = 6245,
    EV_ADX_CLICK_TRACK_END  = 6250,
} TPADXEventType;

@interface TPADXEventManager : NSObject

+(TPADXEventManager *)sharedInstance;

- (void)setup;

- (void)addEventWithEventType:(TPADXEventType)eventType info:(nullable NSDictionary *)infoDic;

@end

NS_ASSUME_NONNULL_END
