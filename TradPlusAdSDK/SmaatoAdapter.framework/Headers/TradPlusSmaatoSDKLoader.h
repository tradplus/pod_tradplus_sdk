//
//  TradPlusSmaatoSDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusSmaatoSDKLoader : NSObject

+ (TradPlusSmaatoSDKLoader *)sharedInstance;
- (void)initWithAppID:(NSString *)appID
             delegate:(id <TPSDKLoaderDelegate>)delegate;

@property (nonatomic,assign)BOOL didInit;
@end
NS_ASSUME_NONNULL_END
