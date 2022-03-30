//
//  TPTestModeController.h
//  TradPlusAds
//
//  Created by xuejun on 2022/2/17.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPTestModeController : NSObject

///默认 YES
+ (void)isShowTipes:(BOOL)show;

+ (void)testModeLogWithPlacementID:(NSString *)placementID adsourceName:(NSString *)adsourceName;
+ (NSString *)getAdsourceNameWithBiddingwaterfall:(NSArray *)biddingwaterfall waterfall:(NSArray *)waterfall;
@end

NS_ASSUME_NONNULL_END
