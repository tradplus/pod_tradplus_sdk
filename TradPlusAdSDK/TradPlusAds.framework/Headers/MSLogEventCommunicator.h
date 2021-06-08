#import <Foundation/Foundation.h>

@interface MSLogEventCommunicator : NSObject

- (void)sendEvents:(NSArray *)events;
- (BOOL)isOverLimit;

@end
