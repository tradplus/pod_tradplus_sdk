//
//  TradPlusYouDaoSDKSetting.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusYouDaoSDKSetting : NSObject

+ (TradPlusYouDaoSDKSetting *)sharedInstance;
- (BOOL)personalizedAd;
@end
NS_ASSUME_NONNULL_END
