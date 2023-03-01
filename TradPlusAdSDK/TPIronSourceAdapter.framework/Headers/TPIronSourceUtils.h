//
//  TPIronSourceUtils.h
//
#import <Foundation/Foundation.h>

@interface TPIronSourceUtils : NSObject

+ (BOOL)isEmpty:(id)value;
+ (NSError *)createErrorWith:(NSString *)description
                   andReason:(NSString *)reason
               andSuggestion:(NSString *)suggestion;
+ (NSString *)getTradPlusSdkVersion;

@end

