

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `TPADXVASTError` enums are the error codes defined in VAST specification. See the VAST specifications
 at https://iabtechlab.com/standards/vast/.

 The current version of `TPADXVASTError` adopts VAST version 4.2 error codes as defined in section
 "2.3.6.3 VAST Error Codes Table". VAST error codes are designed to be backward compatible, which
 means this set of error codes is a superset of previous versions of them.

 Note: Only a portion of these error codes are implemented in SDK, as some of the error codes
 are deprecated, not applicable, or being too vague for the meaning. Unused error codes should be
 commented out and kept for reference.

 Per VAST spec, at a minimum, error code 900 `TPADXVASTErrorUndefined` can be used, but a more specific
 error code benefits all parties involved.
 */
typedef NS_ENUM(NSUInteger, TPADXVASTErrorCode) {
    /// XML parsing error.
    TPADXVASTErrorXMLParseFailure = 100,

    /// VAST schema validation error.
    //TPADXVASTErrorSchemeValidationError = 101,

    /// VAST version of response not supported.
    //TPADXVASTErrorUnsupportedVersionOfResponse = 102,

    /// Trafficking error. Media player received an Ad type that it was not expecting and/or cannot play.
    TPADXVASTErrorCannotPlayMedia = 200,

    /// Media player expecting different linearity.
    //TPADXVASTErrorMediaPlayerExpectingDifferentLinearity = 201,

    /// Media player expecting different duration.
    //TPADXVASTErrorMediaPlayerExpectingDifferentDuration = 202,

    /// Media player expecting different size.
    //TPADXVASTErrorMediaPlayerExpectingDifferentSize = 203,

    /// Ad category was required but not provided.
    //TPADXVASTErrorRequiredAdCategoryNotProvided = 204,

    /// Inline Category violates Wrapper BlockedAdCategories.
    //TPADXVASTErrorInlineCategoryViolatesWrapperBlockedAdCategories = 205,

    /// Ad Break shortened. Ad was not served.
    //TPADXVASTErrorAdBreakShortenedAndWasNotServed = 206,

    /// General Wrapper error.
    //TPADXVASTErrorGeneralWrapperError = 300,

    /// Timeout of VAST URI provided in Wrapper element, or of VAST URI provided in a subsequent
    /// Wrapper element. (URI was either unavailable or reached a timeout as defined by the media player.)
    //TPADXVASTErrorURITimeout = 301,

    /// Wrapper limit reached, as defined by the media player. Too many Wrapper responses have been
    /// received with no InLine response.
    TPADXVASTErrorExceededMaximumWrapperDepth = 302,

    /// No VAST response after one or more Wrappers.
    TPADXVASTErrorNoVASTResponseAfterOneOrMoreWrappers = 303,

    /// InLine response returned ad unit that failed to result in ad display within defined time limit.
    TPADXVASTErrorFailedToDisplayAdFromInlineResponse = 304,

    /// General Linear error. Media player is unable to display the Linear Ad.
    //TPADXVASTErrorMediaPlayerUnableToDisplayLinearAd = 400,

    /// File not found. Unable to find Linear/MediaFile from URI.
    TPADXVASTErrorUnableToFindLinearAdOrMediaFileFromURI = 401,

    /// Timeout of MediaFile URI.
    TPADXVASTErrorTimeoutOfMediaFileURI = 402,

    /// Couldn’t find MediaFile that is supported by this media player, based on the attributes of the
    /// MediaFile element.
    TPADXVASTErrorSupportedMediaFileNotFound = 403,

    /// Problem displaying MediaFile. Media player found a MediaFile with supported type but couldn’t
    /// display it. MediaFile may include: unsupported codecs, different MIME type than MediaFile@type,
    /// unsupported delivery method, etc.
    TPADXVASTErrorProblemDisplayingMediaFile = 405,

    /// Mezzanine was required but not provided. Ad not served.
    //TPADXVASTErrorAdNotServedSinceMezzanineWasRequiredButNotProvided = 406,

    /// Mezzanine is in the process of being downloaded for the first time. Download may take several
    /// hours. Ad will not be served until mezzanine is downloaded and transcoded.
    TPADXVASTErrorMezzanineIsBeingProccessed = 407,

    /// Conditional ad rejected. (deprecated along with conditionalAd)
    //TPADXVASTErrorConditionalAdRejected = 408,

    /// Interactive unit in the InteractiveCreativeFile node was not executed.
    //TPADXVASTErrorInteractiveUnitInInteractiveCreativeFileNodeWasNotExecuted = 409,

    /// Verification unit in the Verification node was not executed.
    //TPADXVASTErrorVerificationUnitInTheVerificationNodeWasNotExecuted = 410,

    /// Mezzanine was provided as required, but file did not meet required specification. Ad not served.
    //TPADXVASTErrorMezzanineWasProvidedAsRequiredButAdFileIsInvalid = 411,

    /// General NonLinearAds error.
    //TPADXVASTErrorGeneralNonLinearAdsError = 500,

    /// Unable to display NonLinearAd because creative dimensions do not align with creative display
    /// area (i.e. creative dimension too large).
    //TPADXVASTErrorNonLinearAdDimensionAlignmentError = 501,

    /// Unable to fetch NonLinearAds/NonLinear resource.
    //TPADXVASTErrorUnableToFetchNonLinearResource = 502,

    /// Couldn’t find NonLinear resource with supported type.
    //TPADXVASTErrorCannotFindNonLinearResourceWithSupportedTypes = 503,

    /// General CompanionAds error.
    TPADXVASTErrorGeneralCompanionAdsError = 600,

    /// Unable to display Companion because creative dimensions do not fit within Companion display
    /// area (i.e., no available space).
    //TPADXVASTErrorCompanionAdDimensionAlignmentError = 601,

    /// Unable to display required Companion.
    //TPADXVASTErrorUnableToDisplayRequiredCompanionAd = 602,

    /// Unable to fetch CompanionAds/Companion resource.
    TPADXVASTErrorUnableToFetchCompanionResource = 603,

    /// Couldn’t find Companion resource with supported type.
    //TPADXVASTErrorCannotFindCompanionAdResourceWithSupportedTypes = 604,

    /// Undefined Error. Use this if the error cannot be described by any other error code.
    TPADXVASTErrorUndefined = 900,

    /// General VPAID error.
    //TPADXVASTErrorGeneralVPAIDError = 901,

    /// General InteractiveCreativeFile error code.
    //TPADXVASTErrorGeneralInteractiveCreativeFileError = 902
};

@interface TPADXVASTError : NSObject

+ (NSError *)errorWithCode:(TPADXVASTErrorCode)code;

@end
NS_ASSUME_NONNULL_END
