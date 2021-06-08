#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MSClientAdPositioning;

typedef enum : NSUInteger {
    MSNativePositionResponseDataIsEmpty,
    MSNativePositionResponseIsNotValidJSON,
    MSNativePositionResponseJSONHasInvalidPositionData,
} MSNativePositionResponseDeserializationErrorCode;

@interface MSNativePositionResponseDeserializer : NSObject

+ (instancetype)deserializer;

- (MSClientAdPositioning *)clientPositioningForData:(NSData *)data error:(NSError **)error;

@end
