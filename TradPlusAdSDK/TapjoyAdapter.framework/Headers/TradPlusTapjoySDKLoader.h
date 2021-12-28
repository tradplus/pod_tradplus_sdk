//
//  TradPlusTapjoySDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusTapjoySDKLoader : NSObject

+ (TradPlusTapjoySDKLoader *)sharedInstance;
- (void)initWithSDKKey:(NSString *)SDKKey
              delegate:(id <TPSDKLoaderDelegate>)delegate;
@end
NS_ASSUME_NONNULL_END
