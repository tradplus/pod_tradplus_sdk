//
//  TradPlusChartboostSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusChartboostSDKLoader : NSObject

+ (TradPlusChartboostSDKLoader *)sharedInstance;
- (void)initWithAppId:(NSString *)appId
         appSignature:(NSString *)appSignature
                 delegate:(id <TPSDKLoaderDelegate>)delegate;
@end
NS_ASSUME_NONNULL_END
