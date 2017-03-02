//
//  ZYBSystemUtil.h
//  ZYB
//
//  Created by Zhouyongbo on 2017/2/13.
//  Copyright © 2017年 Zhouyongbo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZYBSystemUtil : NSObject

/**
 获取设备型号然后手动转化为对应名称
 
 @return 设备名称
 */
+ (NSString *)getDeviceName;

/**
 获取广告位标识符idfa
 
 @return idfa
 */
+ (NSString *)getIDFA;

/**
 获取Mac地址
 
 @return Mac地址
 */
+ (NSString *)getMacAddress;

/**
 获取ip地址
 
 @return ip地址
 */
+ (NSString *)getDeviceIPAddresses;

/**
 获取本地的语言
 
 @return 系统语言
 */
+ (NSString *)getLocalLanguage;

/**
 获取APP版本号
 
 @return app version
 */
+ (NSString *)getAPPVersion;

/**
 获取电池电量
 
 @return 电池电量
 */
+ (CGFloat)getBatteryLevel;

/**
 获取系统名称
 
 @return 系统名称
 */
+ (NSString *)getSystemName;

/**
 获取系统版本号
 
 @return 系统版本号
 */
+ (NSString *)getSystemVersion;

@end
