//
//  TradPlusKwaiAdsSDKLoader.h
//  TPKwaiAdsAdapter
//
//  Created by xuejun on 2024/3/12.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusKwaiAdsSDKLoader : NSObject

+ (TradPlusKwaiAdsSDKLoader *)sharedInstance;

- (void)initWithAppId:(NSString *)appId
                token:(NSString *)token
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end

NS_ASSUME_NONNULL_END
