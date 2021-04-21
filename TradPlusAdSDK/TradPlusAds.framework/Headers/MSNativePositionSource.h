//
//  MSNativePositionSource.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

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
