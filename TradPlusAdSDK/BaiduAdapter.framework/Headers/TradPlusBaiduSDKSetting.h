//
//  TradPlusBaiduSDKSetting.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusBaiduSDKSetting : NSObject

+ (TradPlusBaiduSDKSetting *)sharedInstance;
- (void)setPersonalizedAd;
@end
NS_ASSUME_NONNULL_END
