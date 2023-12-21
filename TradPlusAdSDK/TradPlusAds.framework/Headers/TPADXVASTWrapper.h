#import <Foundation/Foundation.h>
#import <TradPlusAds/TPADXVASTAdVerifications.h>
#import <TradPlusAds/TPADXVASTModel.h>

@class TPADXVASTCreative;
@class TPADXVASTResponse;

NS_ASSUME_NONNULL_BEGIN

@interface TPADXVASTWrapper : TPADXVASTModel

/**
 Optional Viewability resources.
 */
@property (nonatomic, nullable, readonly) TPADXVASTAdVerifications *adVerifications;

/**
 Optional array of creatives associated with the wrapper.
 */
@property (nonatomic, nullable, readonly) NSArray<TPADXVASTCreative *> *creatives;

/**
 Optional array of error URLs.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *errorURLs;

/**
 Optional extensions in the wrapper.
 */
@property (nonatomic, nullable, readonly) NSArray<NSDictionary *> *extensions;

/**
 Required impression URLs associated with the wrapper.
 */
@property (nonatomic, nullable, readonly) NSArray<NSURL *> *impressionURLs;

/**
 Required URL of the next VAST response to fetch.
 */
@property (nonatomic, nullable, readonly) NSURL *VASTAdTagURI;

#pragma mark - Unwrapped VAST Response

/**
 The result of attempting to unwrap this VAST wrapper.
 */
@property (nonatomic, nullable, readonly) TPADXVASTResponse *wrappedVASTResponse;

@end

NS_ASSUME_NONNULL_END
