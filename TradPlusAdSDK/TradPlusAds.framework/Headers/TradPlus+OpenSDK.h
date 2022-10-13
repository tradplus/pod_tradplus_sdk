//
//  TradPlus+OpenSDK.h
//  TradPlusAds
//
//  Created by xuejun on 2022/8/8.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <TradPlusAds/TradPlusAds.h>

@interface TradPlus (OpenSDK)

//初始化
- (void)sdkOpen:(void (^)(NSError *error))completionBlock;

@end
