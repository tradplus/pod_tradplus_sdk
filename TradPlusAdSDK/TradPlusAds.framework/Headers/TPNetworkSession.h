//
//  TPNetworkSession.h
//  fluteSDKSample
//
//  Created by xuejun on 2021/10/18.
//  Copyright © 2021 TradPlus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TPNetworkSession : NSObject

+ (TPNetworkSession *)sharedInstance;
@property (nonatomic,strong)NSURLSession *downloadSession;
@property (nonatomic,strong)NSURLSession *trackingSession;
@property (nonatomic,strong)NSURLSession *eventSession;
@property (nonatomic,strong)NSURLSession *networkSession;

//GET请求
- (void)getNetWorkWithURLStr:(NSString *)urlStr completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;

//POST
- (void)postNetWorkWithURLStr:(NSString *)urlStr timeOut:(NSTimeInterval)timeOut body:(NSData *)body completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;

- (void)encryptionWithURLStr:(NSString *)urlStr jsonObject:(id)jsonObject completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
//埋点
- (void)encryptionEventWithURLStr:(NSString *)urlStr eventStr:(NSString *)eventStr completionHandler:(void (^)(NSError * _Nullable error))completionHandler;
@end

NS_ASSUME_NONNULL_END
