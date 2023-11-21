//
//  TradPlusAmazonSDKLoader.h
//  fluteSDKSample
//
//  Created by Even on 2023/11/7.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>
#import <DTBiOSSDK/DTBiOSSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAmazonSDKLoader : NSObject
+ (TradPlusAmazonSDKLoader *)sharedInstance;

- (void)initWithAppId:(NSString *)appId
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;

- (DTBAdLoader *)setPrivacy;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end

NS_ASSUME_NONNULL_END
