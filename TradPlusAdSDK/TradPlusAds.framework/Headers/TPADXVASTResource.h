

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <TradPlusAds/TPADXVASTModel.h>

/**
 Per VAST 3.0 spec, section 2.3.3.2 "Companion Resource Elements":

 Companion resource types are described below:
 • StaticResource: Describes non-html creative where an attribute for creativeType is used to
 identify the creative resource platform. The video player uses the creativeType information to
 determine how to display the resource:
    o Image/gif,image/jpeg,image/png:displayedusingtheHTMLtag<img>andthe resource URI as the src attribute.
    o Application/x-javascript:displayedusingtheHTMLtag<script>andtheresource URI as the src attribute.
    o application/x-shockwave-flash:displayedusingaFlashTMplayer
 • IFrameResource: Describes a resource that is an HTML page that can be displayed within an Iframe
 on the publisher’s page.
 • HTMLResource: Describes a “snippet” of HTML code to be inserted directly within the publisher’s
 HTML page code.
 */
typedef NS_ENUM(NSUInteger, TPADXVASTResourceType) {
    TPADXVASTResourceType_Undetermined,
    TPADXVASTResourceType_StaticImage,
    TPADXVASTResourceType_StaticScript,
    TPADXVASTResourceType_HTML,
    TPADXVASTResourceType_Iframe,
};

@interface TPADXVASTResource : TPADXVASTModel

@property (nonatomic, strong, readonly) NSString *content;
@property (nonatomic, strong, readonly) NSString *staticCreativeType;

/**
 Default is @c TPADXVASTResourceType_Undetermined. The owner of this resource object is responsible of
 determining the actual type of this resource (it's @c TPADXVastCompanionAd.resourceToDisplay for
 current implementation).
 */
@property (nonatomic, assign) TPADXVASTResourceType type;

- (BOOL)isStaticCreativeTypeImage;

- (BOOL)isStaticCreativeTypeJavaScript;

/**
 Some types of VAST resource content need to be embedded into an HTML template before it can be
 loaded into a web page as HTML source. TMPhe returned value is the embedded ready-to-load version
 of the VAST resource.

 Note: For static image resource, add a tap gesture recognizer to handle click-through. For all
 other resource types, let the web view navigtion delegate handle the click-through.
 */
+ (NSString *)fullHTMLRespresentationForContent:(NSString *)content
                                           type:(TPADXVASTResourceType)type
                                  containerSize:(CGSize)containerSize;

@end
