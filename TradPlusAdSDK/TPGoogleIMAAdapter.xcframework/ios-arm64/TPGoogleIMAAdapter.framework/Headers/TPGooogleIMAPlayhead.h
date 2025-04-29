//
//  TPGooogleIMAPlayhead.h
//  fluteSDKSample
//
//  Created by xuejun on 2024/9/2.
//  Copyright © 2024 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
@import GoogleInteractiveMediaAds;

NS_ASSUME_NONNULL_BEGIN

@interface TPGooogleIMAPlayhead : NSObject<IMAContentPlayhead>

@property (nonatomic,copy)NSTimeInterval (^currentTimeCallBack)(void);
@end

NS_ASSUME_NONNULL_END
