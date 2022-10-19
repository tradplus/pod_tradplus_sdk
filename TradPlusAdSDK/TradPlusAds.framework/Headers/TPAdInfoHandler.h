//
//  TPAdInfoHandler.h
//  TradPlusAds
//
//  Created by ms-mac on 2022/5/24.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPAdInfoHandler : NSObject

+ (TPAdInfoHandler *)sharedInstance;

@property (nonatomic, strong) NSDictionary *dicAdInfo;
//是否开启，默认 false 开启
@property (nonatomic, assign) BOOL close;

- (void)startHandler;
- (void)stopHandler;
@end

NS_ASSUME_NONNULL_END
