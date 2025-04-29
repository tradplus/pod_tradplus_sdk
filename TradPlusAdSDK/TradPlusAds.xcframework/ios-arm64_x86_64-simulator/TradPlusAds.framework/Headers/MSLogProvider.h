#import <Foundation/Foundation.h>
#import <TradPlusAds/MSLogging.h>

@protocol MSLogger;

@interface MSLogProvider : NSObject

+ (MSLogProvider *)sharedLogProvider;
- (void)addLogger:(id<MSLogger>)logger;
- (void)removeLogger:(id<MSLogger>)logger;
- (void)logMessage:(NSString *)message atLogLevel:(MSLogLevel)logLevel;

@end

@protocol MSLogger <NSObject>

- (MSLogLevel)logLevel;
- (void)logMessage:(NSString *)message;

@end
