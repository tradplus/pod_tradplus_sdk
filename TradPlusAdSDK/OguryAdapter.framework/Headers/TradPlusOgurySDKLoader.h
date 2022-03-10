#import <Foundation/Foundation.h>
#import <TradPlusAds/TPSDKLoaderDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface TradPlusOgurySDKLoader : NSObject

+ (TradPlusOgurySDKLoader *)sharedInstance;
- (void)initWithAssetKey:(NSString *)assetKey
             delegate:(id <TPSDKLoaderDelegate>)delegate;
- (void)setPrivacyWithAssetKey:(NSString *)assetKey;
@property (nonatomic,assign)BOOL didInit;
@end
NS_ASSUME_NONNULL_END
