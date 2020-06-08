//
//  MSInterstitialAdManager.h
//  AdExpress
//
//  Copyright (c) 2016 AdExpress, Inc. All rights reserved.
//

#import "MSAdServerCommunicator.h"
#import "MSBaseInterstitialAdapter.h"

@class CLLocation;
@protocol MSInterstitialAdManagerDelegate;

@interface MSInterstitialAdManager : NSObject <MSAdServerCommunicatorDelegate,
    MSInterstitialAdapterDelegate>

@property (nonatomic, weak) id<MSInterstitialAdManagerDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL ready;

- (id)initWithDelegate:(id<MSInterstitialAdManagerDelegate>)delegate;

- (void)loadInterstitialWithAdUnitID:(NSString *)ID
                            keywords:(NSString *)keywords
                            location:(CLLocation *)location
                             testing:(BOOL)testing;
- (void)loadInterstitialWithURL:(NSURL *)url;
- (void)presentInterstitialFromViewController:(UIViewController *)controller;

@end
