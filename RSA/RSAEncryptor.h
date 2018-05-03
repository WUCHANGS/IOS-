//
//  RSAEncryptor.h
//  jiawo
//
//  Created by 李岳 on 2017/9/11.
//  Copyright © 2017年 ZHE JIANG ASUN PROPERTY MANAGEMENT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RSAEncryptor : NSObject


/**
 *  加密方法
 *
 *  @param str   需要加密的字符串
 *  @param path  '.der'格式的公钥文件路径
 */
+ (NSString *)encryptString:(NSString *)str publicKeyWithContentsOfFile:(NSString *)path;

/**
 *  解密方法
 *
 *  @param str       需要解密的字符串
 *  @param path      '.p12'格式的私钥文件路径
 *  @param password  私钥文件密码
 */
+ (NSString *)decryptString:(NSString *)str privateKeyWithContentsOfFile:(NSString *)path password:(NSString *)password;

/**
 *  加密方法
 *
 *  @param str    需要加密的字符串
 *  @param pubKey 公钥字符串
 */
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;

/**
 *  解密方法
 *
 *  @param str     需要解密的字符串
 *  @param privKey 私钥字符串
 */
+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;

@end

//作者：jianshu_wl
//链接：http://www.jianshu.com/p/74a796ec5038
//來源：简书
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

