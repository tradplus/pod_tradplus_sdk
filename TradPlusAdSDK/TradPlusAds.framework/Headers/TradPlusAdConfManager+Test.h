//
//  TradPlusAdConfManager+Test.h
//  TradPlusAds
//
//  Created by xuejun on 2021/8/16.
//  Copyright © 2021 ms-mac. All rights reserved.
//
#import <TradPlusAds/TradPlusAdConfManager.h>


@interface TradPlusAdConfManager ()

- (void)reloadConfWithPlacementId:(NSString *)placementId segmentTag:(NSString *)segmentTag dicUserInfo:(NSDictionary *)dicUserInfo callback:(void (^)(TradPlusAdConfModel *confModel))callback;
@end
