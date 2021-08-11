#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>


@interface UnityRouter : NSObject 

+ (UnityRouter *)sharedRouter;

- (void)initializeWithGameId:(NSString *)gameId instance:(id)instance;
@end
