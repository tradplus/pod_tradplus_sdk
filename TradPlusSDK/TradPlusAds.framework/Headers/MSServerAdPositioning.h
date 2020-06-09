//
//  MSServerAdPositioning.h
//  AdExpress
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import "MSAdPositioning.h"

/**
 * The `MSServerAdPositioning` class is a model that allows you to control the positions where
 * native advertisements should appear within a stream. A server positioning object works in
 * conjunction with an ad placer, telling the ad placer that it should retrieve positioning
 * information from the MeetSocial ad server.
 *
 * Unlike `MSClientAdPositioning`, which represents hard-coded positioning information, a server
 * positioning object offers you the benefit of modifying your ad positions via the MeetSocial website,
 * without rebuilding your application.
 */

@interface MSServerAdPositioning : MSAdPositioning

/** @name Creating a Server Positioning Object */

/**
 * Creates and returns a server positioning object.
 *
 * When an ad placer is set to use server positioning, it will ask the MeetSocial ad server for the
 * positions where ads should be inserted into a given stream. These positioning values are
 * configurable on the MeetSocial website.
 *
 * @return The newly created positioning object.
 *
 * @see MSClientAdPositioning
 */
+ (instancetype)positioning;

@end
