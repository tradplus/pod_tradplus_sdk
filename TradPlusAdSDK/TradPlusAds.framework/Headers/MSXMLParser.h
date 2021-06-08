#import <Foundation/Foundation.h>

@interface MSXMLParser : NSObject

- (NSDictionary *)dictionaryWithData:(NSData *)data error:(NSError **)error;

@end
