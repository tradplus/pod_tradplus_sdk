#import <Foundation/Foundation.h>

#define TradPlusAd_BASE_HOSTNAME_FOR_TESTING     @"testing.ads.TradPlusAd.com"

#define TradPlusAd_API_PATH_AD_REQUEST           @"/m/ad"
#define TradPlusAd_API_PATH_CONVERSION           @"/m/open"
#define TradPlusAd_API_PATH_NATIVE_POSITIONING   @"/m/pos"
#define TradPlusAd_API_PATH_SESSION              @"/m/open"

@interface MSAPIEndpoints : NSObject

+ (void)setUsesHTTPS:(BOOL)usesHTTPS;
+ (NSString *)baseURL;
+ (NSString *)baseURLStringWithPath:(NSString *)path testing:(BOOL)testing;

@end
