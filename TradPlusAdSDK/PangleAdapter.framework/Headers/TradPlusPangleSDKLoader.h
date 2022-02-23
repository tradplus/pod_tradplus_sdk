//
//  TradPlusKuaiShouSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusPangleSDKLoader : NSObject

+ (TradPlusPangleSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
                 delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
+ (NSString *)getNotificationStr;
- (void)setPersonalizedAd;

@property (nonatomic,assign)BOOL didInit;
@end
NS_ASSUME_NONNULL_END
