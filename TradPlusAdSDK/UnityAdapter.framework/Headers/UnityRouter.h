#import <Foundation/Foundation.h>
#import <UnityAds/UnityAds.h>
#import <UnityAds/UADSBanner.h>



@interface UnityRouter : NSObject 

+ (UnityRouter *)sharedRouter;

- (void)initializeWithGameId:(NSString *)gameId instance:(id)instance;
@end
