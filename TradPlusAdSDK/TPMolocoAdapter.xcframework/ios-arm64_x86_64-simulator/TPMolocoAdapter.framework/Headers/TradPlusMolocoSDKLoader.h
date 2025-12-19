//
//  TradPlusKuaiShouSDKLoader.h
//  TestSDKInit


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusMolocoSDKLoader : NSObject

+ (TradPlusMolocoSDKLoader *)sharedInstance;
- (void)initWithAppKey:(NSString *)appKey
                 delegate:(nullable id <TPSDKLoaderDelegate>)delegate;
+ (NSString *)getSDKVersion;
@property (nonatomic,assign)BOOL didInit;
//初始化来源 1:open 2:bidding 3:load
@property (nonatomic,assign)NSInteger initSource;
@end
NS_ASSUME_NONNULL_END
