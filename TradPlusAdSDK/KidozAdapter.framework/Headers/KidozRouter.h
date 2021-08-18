#import <Foundation/Foundation.h>
#import <TradPlusAds/MsCommon.h>

@interface KidozRouter : NSObject 

+ (KidozRouter *)sharedRouter;

- (void)initializeWithAdInfo:(NSDictionary *)adInfo adType:(MsADType)adType instance:(id)instance;
@end
