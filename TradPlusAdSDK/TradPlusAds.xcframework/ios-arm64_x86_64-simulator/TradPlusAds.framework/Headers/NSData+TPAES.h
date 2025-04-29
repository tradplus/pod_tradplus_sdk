//
//  NSData+TPAES.h
//  TestAES
//
//  Created by xuejun on 2022/4/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (TPAES)

//加解密失败都会返回nil，需要做好判空操作
- (NSData *)tp_aes256_encrypt:(NSString *)key;
- (NSData *)tp_aes256_decrypt:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
