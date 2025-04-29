//
//  TradPlusBeiziSDKLoader.h
//  fluteSDKSample
//
//  Created by Even on 2022/12/06.
//  Copyright © 2022 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusBeiziSDKLoader : NSObject

+ (TradPlusBeiziSDKLoader *)sharedInstance;

- (void)initWithAppID:(NSString *)appID
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;
@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;

@end

NS_ASSUME_NONNULL_END
