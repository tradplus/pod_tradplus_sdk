//
//  TradPlusAdColonySDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/12.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAdColonySDKLoader : NSObject

+ (TradPlusAdColonySDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
              zoneIDs:(NSArray <NSString *>*)zoneIDs
             delegate:(id <TPSDKLoaderDelegate>)delegate;
//设置服务器奖励回调
- (void)setUserID:(NSString *)userID;
//设置测试模式
@property (nonatomic,assign)BOOL testModel;
@property (nonatomic,assign)BOOL didInit;
@end

NS_ASSUME_NONNULL_END
