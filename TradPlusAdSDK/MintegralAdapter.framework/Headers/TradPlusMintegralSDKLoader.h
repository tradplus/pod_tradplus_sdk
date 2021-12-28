//
//  TradPlusMintegralSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusMintegralSDKLoader : NSObject

+ (TradPlusMintegralSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
               apiKey:(NSString *)apiKey
             delegate:(id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;
@end
NS_ASSUME_NONNULL_END
