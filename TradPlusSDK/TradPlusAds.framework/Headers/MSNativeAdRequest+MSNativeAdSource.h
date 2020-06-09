//
//  MSNativeAdRequest+MSNativeAdSource.h
//  MsSDK
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import "MSNativeAdRequest.h"

@interface MSNativeAdRequest (MSNativeAdSource)

- (void)startForAdSequence:(NSInteger)adSequence withCompletionHandler:(MSNativeAdRequestHandler)handler;

@end
