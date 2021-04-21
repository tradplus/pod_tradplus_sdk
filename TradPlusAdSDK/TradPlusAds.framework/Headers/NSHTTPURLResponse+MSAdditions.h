//
//  NSHTTPURLResponse+MSAdditions.h
//  MsSDK
//
//  Copyright (c) 2016 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const gMeetSocialHTTPHeaderContentType;

@interface NSHTTPURLResponse (MSAdditions)

- (NSStringEncoding)stringEncodingFromContentType:(NSString *)contentType;

@end
