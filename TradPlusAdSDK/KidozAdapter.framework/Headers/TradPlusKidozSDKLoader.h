//
//  TradPlusAdColonySDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/12.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>
#import "KidozSDK.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TPKidozLoaderDelegate;
@interface TradPlusKidozSDKLoader : NSObject

+ (TradPlusKidozSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
        securityToken:(NSString *)securityToken
             delegate:(id <TPSDKLoaderDelegate>)delegate;

@property (nonatomic,assign)BOOL didInit;
@end

NS_ASSUME_NONNULL_END
