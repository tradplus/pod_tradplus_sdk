//
//  TradPlusAppLovinSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/12.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>
#import <AppLovinSDK/AppLovinSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusAppLovinSDKLoader : NSObject

+ (TradPlusAppLovinSDKLoader *)sharedInstance;

- (void)initWithAppID:(NSString *)appID
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;

//设置服务器奖励回调
- (void)setUserID:(NSString *)userID;

@property (nonatomic,strong)ALSdk *sdk;
@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end

NS_ASSUME_NONNULL_END
