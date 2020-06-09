//
//  MSGeolocationProvider.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface MSGeolocationProvider : NSObject

/**
 * Returns the shared instance of the `MSGeolocationProvider` class.
 *
 * @return The shared instance of the `MSGeolocationProvider` class.
 */
+ (instancetype)sharedProvider;

/**
 * The most recent location determined by the location provider.
 */
@property (nonatomic, readonly) CLLocation *lastKnownLocation;

/**
 * Determines whether the location provider should attempt to listen for location updates. The
 * default value is YES.
 */
@property (nonatomic, assign) BOOL locationUpdatesEnabled;

@end
