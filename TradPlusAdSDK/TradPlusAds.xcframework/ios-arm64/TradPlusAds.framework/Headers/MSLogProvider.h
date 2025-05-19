#import <Foundation/Foundation.h>
#import <TradPlusAds/MSLogging.h>

@protocol MSLogger;

@interface MSLogProvider : NSObject

+ (MSLogProvider *)sharedLogProvider;
- (void)addLogger:(id<MSLogger>)logger;
- (void)removeLogger:(id<MSLogger>)logger;
- (void)logMessage:(NSString *)message atLogLevel:(TPLogLevel)logLevel;

@end

@protocol MSLogger <NSObject>

- (TPLogLevel)logLevel;
- (void)logMessage:(NSString *)message;

@end
