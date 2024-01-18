

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXVASTModel.h>

@interface TPADXVASTMediaFile : TPADXVASTModel

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *delivery;
@property (nonatomic, copy, readonly) NSString *mimeType;
@property (nonatomic, readonly) CGFloat bitrate;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, copy, readonly) NSURL *URL;

@end

@interface TPADXVASTMediaFile (Selection)

/**
 Pick the best media file that fits into the provided container size and scale factor.
 */
+ (TPADXVASTMediaFile *)bestMediaFileFromCandidates:(NSArray<TPADXVASTMediaFile *> *)candidates
                                forContainerSize:(CGSize)containerSize
                            containerScaleFactor:(CGFloat)containerScaleFactor;

@end

@interface TPADXVASTMediaFile (MimeType)

/**
 The file extension associated with this VAST MIME type. In the event that the VAST MIME type is
 invalid, this will be @c nil.
 */
@property (nonatomic, copy, readonly) NSString *fileExtensionForMimeType;

@end
