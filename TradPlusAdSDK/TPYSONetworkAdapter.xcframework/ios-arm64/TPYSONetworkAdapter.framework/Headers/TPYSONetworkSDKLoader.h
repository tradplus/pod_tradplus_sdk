//
//  TPYSONetworkSDKLoader.h
//  fluteSDKSample
//
//  Copyright © 2023 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPYSONetworkSDKLoader : NSObject

+ (TPYSONetworkSDKLoader *)sharedInstance;

- (void)initWithDelegate:(nullable id <TPSDKLoaderDelegate>)delegate;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;

@end

NS_ASSUME_NONNULL_END
