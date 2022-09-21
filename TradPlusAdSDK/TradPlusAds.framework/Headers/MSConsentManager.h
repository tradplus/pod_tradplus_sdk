
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPConsentDialogViewController.h>
#import <TradPlusAds/MsCommon.h>

@interface MSConsentManager : NSObject

/**
Flag indicating if GDPR is applicable to the user.
*/
@property (nonatomic, readonly) MSBool isGDPRApplicable;
/**
Current consent status.
*/
@property (nonatomic, readonly) MSConsentStatus currentStatus;
/**
Flag indicating that personally identifiable information can be collected.
*/
@property (nonatomic) BOOL canCollectPersonalInfo;

/**
 * Singleton instance of the manager.
 */
+ (MSConsentManager * _Nonnull)sharedManager;

/**
 If a consent dialog is loaded, this method will present it modally from the given `viewController`. If no consent
 dialog is loaded this method will do nothing. `completion` is called upon successful presentation; it is not called otherwise.
 */
- (void)showConsentDialogFromViewController:(UIViewController * _Nonnull)viewController
                                    didShow:(void (^ _Nullable)(void))didShow
                                 didDismiss:(void (^ _Nullable)(void))didDismiss;

@end
