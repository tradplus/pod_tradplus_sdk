//
//  MSAdServerCommunicator.h
//  AdExpress
//
//  Copyright (c) 2012 TradPlusAd, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MSAdConfiguration.h"
#import "MSGlobal.h"

@protocol MSAdServerCommunicatorDelegate;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSAdServerCommunicator : NSObject <NSURLConnectionDataDelegate>

@property (nonatomic, weak) id<MSAdServerCommunicatorDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL loading;

- (id)initWithDelegate:(id<MSAdServerCommunicatorDelegate>)delegate;

- (void)loadURL:(NSURL *)URL;
- (void)cancel;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MSAdServerCommunicatorDelegate <NSObject>

@required
- (void)communicatorDidReceiveAdConfiguration:(MSAdConfiguration *)configuration;
- (void)communicatorDidFailWithError:(NSError *)error;

@end
