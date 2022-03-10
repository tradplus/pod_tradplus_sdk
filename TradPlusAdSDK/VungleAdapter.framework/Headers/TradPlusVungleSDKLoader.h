//
//  TradPlusVungleSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>
#import <VungleSDK/VungleSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusVungleSDKLoader : NSObject

+ (TradPlusVungleSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
             delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
- (void)updateConsentStatus:(VungleConsentStatus)status;
- (VungleConsentStatus) getCurrentConsentStatus;

@property (nonatomic,assign)BOOL didInit;
@end
NS_ASSUME_NONNULL_END
