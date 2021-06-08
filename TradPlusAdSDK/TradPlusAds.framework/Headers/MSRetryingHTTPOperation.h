#import <Foundation/Foundation.h>

#import "MSQRunLoopOperation.h"

extern NSString * const MSRetryingHTTPOperationErrorDomain;

typedef enum {
    MSRetryingHTTPOperationReceivedNonRetryResponse = -1000,
    MSRetryingHTTPOperationExceededRetryLimit = -1001
} MSRetryingHTTPOperationErrorCode;

////////////////////////////////////////////////////////////////////////////////////////////////////

// Adapted from QHTTPOperation / RetryingHTTPOperation in Apple's MVCNetworking sample code.

@interface MSRetryingHTTPOperation : MSQRunLoopOperation

// Things that are configured via the init method and can't be changed.
@property (copy, readonly) NSURLRequest *request;

// Things that are only meaningful after the operation is finished.
@property (copy, readonly) NSHTTPURLResponse *lastResponse;
@property (strong, readonly) NSMutableData *lastReceivedData;

- (instancetype)initWithRequest:(NSURLRequest *)request;

@end
