#import <Foundation/Foundation.h>

typedef enum {
    MSQRunLoopOperationStateInited,
    MSQRunLoopOperationStateExecuting,
    MSQRunLoopOperationStateFinished
} MSQRunLoopOperationState;

////////////////////////////////////////////////////////////////////////////////////////////////////

// Adapted from QRunLoopOperation in Apple's MVCNetworking sample code.

@interface MSQRunLoopOperation : NSOperation

// Things you can configure before queuing the operation.

// IMPORTANT: Do not change these after queuing the operation; it's very likely that
// bad things will happen if you do.

@property (strong) NSThread *runLoopThread;
@property (copy) NSSet *runLoopModes;

// Things that are only meaningful after the operation is finished.

@property (copy, readonly) NSError *error;

// Things you can only alter implicitly.

@property (assign, readonly) MSQRunLoopOperationState state;
@property (strong, readonly) NSThread *actualRunLoopThread;
@property (assign, readonly) BOOL isActualRunLoopThread;
@property (copy, readonly) NSSet *actualRunLoopModes;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSQRunLoopOperation (SubClassSupport)

// Override points

// A subclass will probably need to override -operationDidStart and -operationWillFinish
// to set up and tear down its run loop sources, respectively.  These are always called
// on the actual run loop thread.
//
// Note that -operationWillFinish will be called even if the operation is cancelled.
//
// -operationWillFinish can check the error property to see whether the operation was
// successful.  error will be NSCocoaErrorDomain/NSUserCancelledError on cancellation.
//
// -operationDidStart is allowed to call -finishWithError:.

- (void)operationDidStart;
- (void)operationWillFinish;

// Support methods

// A subclass should call finishWithError: when the operation is complete, passing nil
// for no error and an error otherwise.  It must call this on the actual run loop thread.
//
// Note that this will call -operationWillFinish before returning.

- (void)finishWithError:(NSError *)error;

@end
