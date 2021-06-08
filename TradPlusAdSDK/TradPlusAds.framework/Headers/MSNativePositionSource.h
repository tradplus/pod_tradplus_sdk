#import <Foundation/Foundation.h>

@class MSAdPositioning;

typedef enum : NSUInteger {
    MSNativePositionSourceInvalidAdUnitIdentifier,
    MSNativePositionSourceEmptyResponse,
    MSNativePositionSourceDeserializationFailed,
    MSNativePositionSourceConnectionFailed,
} MSNativePositionSourceErrorCode;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSNativePositionSource : NSObject

- (void)loadPositionsWithAdUnitIdentifier:(NSString *)identifier completionHandler:(void (^)(MSAdPositioning *positioning, NSError *error))completionHandler;
- (void)cancel;

@end
