//
//  TPGDTSDKConfig.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/12/20.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPGDTSDKConfig : NSObject

+ (TPGDTSDKConfig *)sharedInstance;

- (void)setPersonalizedAd;
@end

NS_ASSUME_NONNULL_END
