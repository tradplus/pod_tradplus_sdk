//
//  TradPlusGDTMobSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusGDTMobSDKLoader : NSObject

+ (TradPlusGDTMobSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;
@end
NS_ASSUME_NONNULL_END
