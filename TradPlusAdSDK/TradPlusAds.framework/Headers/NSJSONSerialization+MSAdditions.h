#import <Foundation/Foundation.h>

@interface NSJSONSerialization (MSAdditions)

+ (id)mp_JSONObjectWithData:(NSData *)data options:(NSJSONReadingOptions)opt clearNullObjects:(BOOL)clearNulls error:(NSError **)error;

@end
