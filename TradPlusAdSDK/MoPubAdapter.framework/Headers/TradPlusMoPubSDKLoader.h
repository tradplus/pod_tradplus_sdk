//
//  TradPlusInMobiSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusMoPubSDKLoader : NSObject

+ (TradPlusMoPubSDKLoader *)sharedInstance;
- (void)initWithAccountID:(NSString *)accountID
                 delegate:(id <TPSDKLoaderDelegate>)delegate;
@end
NS_ASSUME_NONNULL_END
