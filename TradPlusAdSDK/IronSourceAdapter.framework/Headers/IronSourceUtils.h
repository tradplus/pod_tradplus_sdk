//
//  IronSourceUtils.h
//
#import <Foundation/Foundation.h>
#import <TradPlusAds/MSInterstitialCustomEvent.h>

@interface IronSourceUtils : NSObject

+ (BOOL)isEmpty:(id)value;
+ (NSError *)createErrorWith:(NSString *)description
                   andReason:(NSString *)reason
               andSuggestion:(NSString *)suggestion;
+ (NSString *)getTradPlusSdkVersion;

@end

