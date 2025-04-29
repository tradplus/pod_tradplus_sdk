#import <Foundation/Foundation.h>

extern NSString * const gTradPlusAdHTTPHeaderContentType;

@interface NSHTTPURLResponse (MSAdditions)

- (NSStringEncoding)stringEncodingFromContentType:(NSString *)contentType;

@end
