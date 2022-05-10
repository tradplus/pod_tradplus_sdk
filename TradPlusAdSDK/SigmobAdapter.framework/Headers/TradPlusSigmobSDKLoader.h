//
//  TradPlusSigmobSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSigmobSDKLoader : NSObject

+ (TradPlusSigmobSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
               appKey:(NSString *)appKey
                 delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;

@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end
NS_ASSUME_NONNULL_END
