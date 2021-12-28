//
//  TradPlusSigmobSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSigmobSDKLoader : NSObject

+ (TradPlusSigmobSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
               appKey:(NSString *)appKey
                 delegate:(id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;
@end
NS_ASSUME_NONNULL_END
