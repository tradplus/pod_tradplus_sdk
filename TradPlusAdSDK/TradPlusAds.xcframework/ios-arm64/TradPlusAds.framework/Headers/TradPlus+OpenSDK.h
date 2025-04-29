//
//  TradPlus+OpenSDK.h
//  TradPlusAds
//
//  Created by xuejun on 2022/8/8.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusAds.h>

@interface TradPlus ()

@property (nonatomic,copy)NSString *savePathURL;
@property (nonatomic,assign)NSInteger tryCount;
@property (nonatomic,assign)NSInteger maxTryCount;
@property (nonatomic,assign)NSInteger urlMode;
@property (nonatomic,assign)NSInteger retryTimes;

//初始化
- (void)sdkOpen:(void (^)(NSError *error))completionBlock;
- (void)localConfiguration;
@end
