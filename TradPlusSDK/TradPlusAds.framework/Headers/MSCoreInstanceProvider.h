#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MSGlobal.h"
#import "MSURLResolver.h"

@class MSAdConfiguration;

// Fetching Ads
@class MSAdServerCommunicator;
@protocol MSAdServerCommunicatorDelegate;

// URL Handling
@class MSAdDestinationDisplayAgent;
@protocol MSAdDestinationDisplayAgentDelegate;

// Utilities
@class MSAdAlertManager, MSAdAlertGestureRecognizer;
@class MSReachability;
@class MSTimer;
@class MSLogEventRecorder;
@class MSNetworkManager;

typedef id(^MSSingletonProviderBlock)();

@interface MSCoreInstanceProvider : NSObject

+ (instancetype)sharedProvider;
- (id)singletonForClass:(Class)klass provider:(MSSingletonProviderBlock)provider;

- (void)keepObjectAliveForCurrentRunLoopIteration:(id)anObject;

#pragma mark - Fetching Ads
- (NSMutableURLRequest *)buildConfiguredURLRequestWithURL:(NSURL *)URL;
- (MSAdServerCommunicator *)buildMPAdServerCommunicatorWithDelegate:(id<MSAdServerCommunicatorDelegate>)delegate;

#pragma mark - URL Handling
- (MSURLResolver *)buildMPURLResolverWithURL:(NSURL *)URL completion:(MSURLResolverCompletionBlock)completion;
- (MSAdDestinationDisplayAgent *)buildMPAdDestinationDisplayAgentWithDelegate:(id<MSAdDestinationDisplayAgentDelegate>)delegate;

#pragma mark - Utilities
- (UIDevice *)sharedCurrentDevice;
- (id<MSAdAlertManagerProtocol>)buildMPAdAlertManagerWithDelegate:(id)delegate;
- (MSAdAlertGestureRecognizer *)buildMPAdAlertGestureRecognizerWithTarget:(id)target action:(SEL)action;
- (NSOperationQueue *)sharedOperationQueue;
- (MSReachability *)sharedMPReachability;
- (MSLogEventRecorder *)sharedLogEventRecorder;
- (MSNetworkManager *)sharedNetworkManager;

// This call may return nil and may not update if the user hot-swaps the device's sim card.
- (NSDictionary *)sharedCarrierInfo;

- (MSTimer *)buildMPTimerWithTimeInterval:(NSTimeInterval)seconds target:(id)target selector:(SEL)selector repeats:(BOOL)repeats;

@end
