#import <UIKit/UIKit.h>

@protocol MSActivityViewControllerHelperDelegate;

/**
 * The MSActivityViewControllerHelper provides a wrapper around a UIActvityViewController
 * and provides hooks via the MSActivityViewControllerHelperDelegate to handle the
 * lifecycle of the underlying UIActivityViewController.
 */

@interface MSActivityViewControllerHelper : NSObject

/**
 * The delegate (`MSActivityViewControllerHelperDelegate`) of the
 * MSActivityViewControllerHelper.
 */

@property (nonatomic, weak) id<MSActivityViewControllerHelperDelegate> delegate;

/**
 * Initializes the MSActivityViewControllerHelper and stores a weak reference
 * to the supplied delegate.
 *
 * @param delegate
 */
- (instancetype)initWithDelegate:(id<MSActivityViewControllerHelperDelegate>)delegate;

/**
 * Instantiates and displays the underlying UIActivityViewController with the
 * the specified `subject` and `body`.
 *
 * @param subject The subject to be displayed in the UIActivityViewController.
 * @param body The body to be displayed in the UIActivityViewController.
 *
 * @return a BOOL indicating whether or not the UIActivityViewController was successfully shown.
 */
- (BOOL)presentActivityViewControllerWithSubject:(NSString *)subject body:(NSString *)body;

@end


/**
 * The delegate of a `MSActivityViewController` must adopt the `MSActivityViewController`
 * protocol. It must implement `viewControllerForPresentingActivityViewController` to
 * provide a root view controller from which to display content.
 *
 * Optional methods of this protocol allow the delegate to be notified before
 * presenting and after dismissal.
 */
@protocol MSActivityViewControllerHelperDelegate <NSObject>

@required

/**
 * Asks the delegate for a view controller to use for presenting content.
 *
 * @return A view controller that should be used for presenting content.
 */
- (UIViewController *)viewControllerForPresentingActivityViewController;

@optional

/**
 * Sent before the UIActivityViewController is presented.
 */
- (void)activityViewControllerWillPresent;

/**
 * Sent after the UIActivityViewController has been dismissed.
 */
- (void)activityViewControllerDidDismiss;

@end
