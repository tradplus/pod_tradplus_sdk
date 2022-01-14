//
//  TradPlusUnitySDKLoader.h
//  TestSDKInit
//
//  Created by xuejun on 2021/10/11.
//

#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusUnitySDKLoader : NSObject

+ (TradPlusUnitySDKLoader *)sharedInstance;
- (void)initWithGameID:(NSString *)gameID
              delegate:(id <TPSDKLoaderDelegate>)delegate;
- (void)setPersonalizedAd;

@property (nonatomic,assign)BOOL didInit;
@end
NS_ASSUME_NONNULL_END
