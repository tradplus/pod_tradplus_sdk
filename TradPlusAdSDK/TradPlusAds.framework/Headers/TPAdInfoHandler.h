//
//  TPAdInfoHandler.h
//  TradPlusAds
//
//  Created by ms-mac on 2022/5/24.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TradPlusAdWaterfallItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface TPAdInfoHandler : NSObject
@property (nonatomic, strong) NSDictionary *dicAdInfo;

+ (TPAdInfoHandler *)sharedInstance;

- (void)startHandler;
- (void)stopHandler;
@end

NS_ASSUME_NONNULL_END
