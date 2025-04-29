//
//  MSAdCacheManager.h
//  TradPlusAds
//
//  Created by xuejun on 2021/7/14.
//  Copyright © 2021 ms-mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TradPlusAdUnitCache.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdCacheManager : NSObject

+ (TradPlusAdCacheManager *)sharedInstance;
- (TradPlusAdUnitCache *)getCacheWithPlacementID:(NSString *)placementID;
@end

NS_ASSUME_NONNULL_END
