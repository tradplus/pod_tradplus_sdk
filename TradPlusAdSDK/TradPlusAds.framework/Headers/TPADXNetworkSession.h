//
//  TPADXNetworkSession.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPADXNetworkSession : NSObject

+ (TPADXNetworkSession *)sharedInstance;
@property (nonatomic,strong)NSURLSession *downloadSession;
@property (nonatomic,strong)NSURLSession *trackingSession;
@property (nonatomic,strong)NSURLSession *eventSession;

- (void)sendVASTErrorWithRequest:(NSURLRequest *)request;
- (void)startTaskWithWithRequest:(NSURLRequest *)request completionHandler:(void (^)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completionHandler;
@end

NS_ASSUME_NONNULL_END
