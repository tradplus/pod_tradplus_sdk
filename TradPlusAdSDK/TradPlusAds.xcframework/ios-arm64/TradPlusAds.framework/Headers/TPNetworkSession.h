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
@property (nonatomic,strong)NSURLSession *confSession;
@property (nonatomic,copy)NSString *sdkOpenServerURL;

- (NSString *)URLEncodedWithURLString:(NSString *)URLStr;
- (NSString *)URLEncodedWithURLString:(NSString *)str params:(NSDictionary *)params;

//GET请求
- (void)getNetWorkWithURLStr:(NSString *)urlStr completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
- (void)getNetWorkWithURLStr:(NSString *)urlStr session:(NSURLSession *)session completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
//POST
- (void)postNetWorkWithURLStr:(NSString *)urlStr timeOut:(NSTimeInterval)timeOut body:(NSData *)body completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
//加密请求（POST）
- (void)encryptionWithURLStr:(NSString *)urlStr jsonObject:(id)jsonObject completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
- (void)encryptionWithURLStr:(NSString *)urlStr jsonObject:(id)jsonObject session:(NSURLSession *)session completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
- (void)encryptionWithURLStr:(NSString *)urlStr jsonData:(NSData *)jsonData session:(NSURLSession *)session completionHandler:(void (^)(NSDictionary * _Nullable callbackDic, NSError * _Nullable error))completionHandler;
//加密请求（埋点）
- (void)encryptionEventWithURLStr:(NSString *)urlStr eventStr:(NSString *)eventStr completionHandler:(void (^)(NSError * _Nullable error))completionHandler;
- (void)encryptionEventWithURLStr:(NSString *)urlStr eventData:(NSData *)eventData completionHandler:(void (^)(NSError * _Nullable error))completionHandler;
//bidding 通知
- (void)bidTrackingWithURLStr:(NSString *)strURL ecpmValue:(NSString *)ecpmValue secondValue:(NSString *)secondValue lostCode:(NSString *)lostCode ASPID:(NSString *)ASPID secondASPID:(NSString *)secondASPID completionBlock:(void (^)(NSString *ec))completionBlock;
@end

NS_ASSUME_NONNULL_END
