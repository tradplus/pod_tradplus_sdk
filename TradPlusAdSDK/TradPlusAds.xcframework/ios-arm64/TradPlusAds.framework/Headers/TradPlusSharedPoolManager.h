//
//  TradPlusSharedPoolManager.h
//  TradPlusAds
//
//  Created by xuejun on 2024/8/8.
//  Copyright © 2024 TradPlus. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusSharedPool.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSharedPoolManager : NSObject

+ (TradPlusSharedPoolManager *)sharedInstance;
- (TradPlusSharedPool *)getSharedPoolWithUnitID:(NSString *)unitID;
@end

NS_ASSUME_NONNULL_END
