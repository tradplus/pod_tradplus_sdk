//
//  MSEnhancedDeeplinkRequest.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSEnhancedDeeplinkRequest : NSObject

@property (copy) NSURL *originalURL;

// Request components derived from the original URL.
@property (copy) NSURL *primaryURL;
@property (strong) NSArray *primaryTrackingURLs;
@property (copy) NSURL *fallbackURL;
@property (strong) NSArray *fallbackTrackingURLs;

- (instancetype)initWithURL:(NSURL *)URL;

@end
