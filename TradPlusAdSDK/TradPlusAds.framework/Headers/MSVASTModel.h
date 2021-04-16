#import <Foundation/Foundation.h>

@protocol MSObjectMapper <NSObject>

- (id)mappedObjectFromSourceObject:(id)object;
- (Class)requiredSourceObjectClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

id<MSObjectMapper> MSParseArrayOf(id<MSObjectMapper> internalMapper);
id<MSObjectMapper> MSParseURLFromString();
id<MSObjectMapper> MSParseNumberFromString(NSNumberFormatterStyle numberStyle);
id<MSObjectMapper> MSParseTimeIntervalFromDurationString();
id<MSObjectMapper> MSParseClass(Class destinationClass);

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSNSStringToNSURLMapper : NSObject <MSObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSDurationStringToTimeIntervalMapper : NSObject <MSObjectMapper>
@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSStringToNumberMapper : NSObject <MSObjectMapper>

- (id)initWithNumberStyle:(NSNumberFormatterStyle)numberStyle;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSClassMapper : NSObject <MSObjectMapper>

- (id)initWithDestinationClass:(Class)destinationClass;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSNSArrayMapper : NSObject <MSObjectMapper>

- (id)initWithInternalMapper:(id<MSObjectMapper>)mapper;

@end

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface MSVASTModel : NSObject

+ (NSDictionary *)modelMap;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (id)generateModelFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;
- (NSArray *)generateModelsFromDictionaryValue:(id)value modelProvider:(id(^)(id))provider;

@end
