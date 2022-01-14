//
//  IronSourceManager.h
//

#import <IronSource/IronSource.h>
#import "IronSourceRewardedVideoDelegate.h"
#import "IronSourceRewardedVideoCustomEvent.h"
#import "IronSourceConstants.h"
#import "IronSourceInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface IronSourceManager
: NSObject <ISDemandOnlyRewardedVideoDelegate, ISDemandOnlyInterstitialDelegate>

+ (instancetype)sharedManager;

- (void)loadRewardedAdWithDelegate:(id<IronSourceRewardedVideoDelegate>)delegate
                        instanceID:(NSString *)instanceID;
- (void)presentRewardedAdFromViewController:(nonnull UIViewController *)viewController
                                 instanceID:(NSString *)instanceID;
- (void)requestInterstitialAdWithDelegate:(id<IronSourceInterstitialDelegate>)delegate
                               instanceID:(NSString *)instanceID;
- (void)presentInterstitialAdFromViewController:(nonnull UIViewController *)viewController
                                     instanceID: (NSString *) instanceID;

@end

NS_ASSUME_NONNULL_END
