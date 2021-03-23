
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSContentBlocker : NSObject
/**
 Blocked resources for use with @c WKContentRuleListStore.
 */
@property (class, nonatomic, readonly, nullable) NSString * blockedResourcesList;
@end

NS_ASSUME_NONNULL_END
