//
//  MSAdDestinationDisplayAgent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <TradPlusAds/MSActivityViewControllerHelper+TweetShare.h>
#import <TradPlusAds/MSProgressOverlayView.h>
#import <TradPlusAds/MSStoreKitProvider.h>
#import <SafariServices/SafariServices.h>

@protocol MSAdDestinationDisplayAgentDelegate;

@interface MSAdDestinationDisplayAgent : NSObject <MSProgressOverlayViewDelegate,
                                                   SFSafariViewControllerDelegate,
                                                   MSSKStoreProductViewControllerDelegate,
                                                   MSActivityViewControllerHelperDelegate>

@property (nonatomic, weak) id<MSAdDestinationDisplayAgentDelegate> delegate;

+ (MSAdDestinationDisplayAgent *)agentWithDelegate:(id<MSAdDestinationDisplayAgentDelegate>)delegate;
- (void)displayDestinationForURL:(NSURL *)URL;
- (void)cancel;

@end

@protocol MSAdDestinationDisplayAgentDelegate <NSObject>

- (UIViewController *)viewControllerForPresentingModalView;
- (void)displayAgentWillPresentModal;
- (void)displayAgentWillLeaveApplication;
- (void)displayAgentDidDismissModal;

@end

@class MSTelephoneConfirmationController;

typedef void (^MSTelephoneConfirmationControllerClickHandler)(NSURL *targetTelephoneURL, BOOL confirmed);

@interface MSTelephoneConfirmationController : NSObject <UIAlertViewDelegate>

- (id)initWithURL:(NSURL *)url clickHandler:(MSTelephoneConfirmationControllerClickHandler)clickHandler;
- (void)show;

@end
