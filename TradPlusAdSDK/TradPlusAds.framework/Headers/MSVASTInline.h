//
//  MSVASTInline.h
//  AdExpress
//
//  Copyright (c) 2015 MeetSocial. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSVASTModel.h"

@interface MSVASTInline : MSVASTModel

@property (nonatomic, readonly) NSArray *creatives;
@property (nonatomic, readonly) NSArray *errorURLs;
@property (nonatomic, readonly) NSDictionary *extensions;
@property (nonatomic, readonly) NSArray *impressionURLs;

@end
