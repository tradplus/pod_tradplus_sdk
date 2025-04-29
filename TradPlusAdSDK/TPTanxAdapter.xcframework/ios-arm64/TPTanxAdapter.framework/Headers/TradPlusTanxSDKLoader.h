//
//  TradPlusTanxSDKLoader.h
//  fluteSDKSample
//
//  Created by TradPlus on 2024/1/26.
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusTanxSDKLoader : NSObject
+ (TradPlusTanxSDKLoader *)sharedInstance;

- (void)initWithAppId:(NSString *)appId
               appKey:(NSString *)appKey
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;

- (void)initWithAppId:(NSString *)appId 
               appKey:(NSString *)appKey
       realTimeSwitch:(BOOL)realTimeSwitch
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end

NS_ASSUME_NONNULL_END
