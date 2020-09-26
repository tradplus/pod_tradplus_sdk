//
//  MSAnalyticsTracker.h
//  AdExpress
//
//  Copyright (c) 2017 AdExpress. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MSAdConfiguration;

@interface MSAnalyticsTracker : NSObject

+ (MSAnalyticsTracker *)tracker;

- (void)trackImpressionForConfiguration:(MSAdConfiguration *)configuration;
- (void)trackClickForConfiguration:(MSAdConfiguration *)configuration;
- (void)sendTrackingRequestForURLs:(NSArray *)URLs;

@end
