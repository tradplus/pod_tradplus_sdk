//
//  MSMeetSocialNativeAdAdapter.h
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import "MSNativeAdAdapter.h"

@class MSAdConfiguration;

@interface MSMeetSocialNativeAdAdapter : NSObject <MSNativeAdAdapter>

@property (nonatomic, weak) id<MSNativeAdAdapterDelegate> delegate;
@property (nonatomic, readonly) NSArray *impressionTrackerURLs;
@property (nonatomic, readonly) NSArray *clickTrackerURLs;
@property (nonatomic) MSAdConfiguration *adConfiguration;

- (instancetype)initWithAdProperties:(NSMutableDictionary *)properties;

@end
