
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TradPlusDataModel : NSObject


/**
 传入数据自动赋值

 @param dic 数据字典类型
 */
- (void)setDataWithDictionary:(NSDictionary *)dic;

/**
 获取模型的数据转换

 @return 字典数据 方便转换为 json
 */
- (NSDictionary *)getDataDictionary;

/**
 用于解析后进行其他的相关操作 比如第三方的字段与服务器的不同进行转化时
 dic 数据源
 */
- (void)otherRule:(NSDictionary*)dataDic;
@end
