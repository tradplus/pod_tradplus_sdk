#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/MSGlobal.h>
#import <TradPlusAds/MSURLResolver.h>

@class MSAdConfiguration;

// URL Handling
@class MSAdDestinationDisplayAgent;
@protocol MSAdDestinationDisplayAgentDelegate;

// Utilities
@class MSAdAlertManager, MSAdAlertGestureRecognizer;
@class MSReachability;
@class MSTimer;

typedef id(^MSSingletonProviderBlock)(void);

@interface MSCoreInstanceProvider : NSObject

+ (instancetype)sharedProvider;
- (id)singletonForClass:(Class)klass provider:(MSSingletonProviderBlock)provider;

- (void)keepObjectAliveForCurrentRunLoopIteration:(id)anObject;

#pragma mark - Fetching Ads
- (NSMutableURLRequest *)buildConfiguredURLRequestWithURL:(NSURL *)URL;

#pragma mark - URL Handling
- (MSURLResolver *)buildMPURLResolverWithURL:(NSURL *)URL completion:(MSURLResolverCompletionBlock)completion;
- (MSAdDestinationDisplayAgent *)buildMPAdDestinationDisplayAgentWithDelegate:(id<MSAdDestinationDisplayAgentDelegate>)delegate;

#pragma mark - Utilities
- (UIDevice *)sharedCurrentDevice;
- (MSAdAlertGestureRecognizer *)buildMPAdAlertGestureRecognizerWithTarget:(id)target action:(SEL)action;
- (NSOperationQueue *)sharedOperationQueue;
- (MSReachability *)sharedMPReachability;

// This call may return nil and may not update if the user hot-swaps the device's sim card.
- (NSDictionary *)sharedCarrierInfo;

- (MSTimer *)buildMPTimerWithTimeInterval:(NSTimeInterval)seconds target:(id)target selector:(SEL)selector repeats:(BOOL)repeats;

@end
