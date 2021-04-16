//
//  MSAdDestinationDisplayAgent.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSActivityViewControllerHelper+TweetShare.h"
#import "MSURLResolver.h"
#import "MSProgressOverlayView.h"
#import "MSStoreKitProvider.h"
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

@optional

- (MSAdConfiguration *)adConfiguration;

@end
