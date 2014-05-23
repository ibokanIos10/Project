//
//  PhoneCommons.h
//  temp
//
//  Created by ibokan on 14-5-23.
//  Copyright (c) 2014年 yujie. All rights reserved.
//

#ifndef PhoneCommons_h
#define PhoneCommons_h

/*************************************** 常用文件夹路径 *************************************/
#pragma mark ---- 常用文件夹路径 ----

// APP应用程序目录(即沙盒目录，在该目录下有三个文件夹：Documents、Library、temp以及一个.app包)
#define PATH_OF_APP_HOME    NSHomeDirectory()
// 临时文件夹
#define PATH_OF_TEMP        NSTemporaryDirectory()
// Document文件夹
#define PATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]


/*************************************** 屏幕尺寸 *************************************/
#pragma mark ---- 屏幕尺寸 ----
// 屏幕的宽度
#define kW_IPhone  [UIScreen mainScreen].bounds.size.width

// 屏幕的高度
#define kH_IPhone  [UIScreen mainScreen].bounds.size.height

// 屏幕的原点X
#define kX_IPhone_Origin   [UIScreen mainScreen].bounds.origin.x

// 屏幕的原点Y
#define kY_IPhone_Origin   [UIScreen mainScreen].bounds.origin.y


/*************************************** 颜色设置 *************************************/
#pragma mark ---- 颜色设置 ----

// 自定义颜色
#define kRGB_COLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]

// 自定义颜色-带透明度
#define kRGBA_COLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]


/*************************************** 状态栏 *************************************/
#pragma mark ---- 状态栏 ----

// 状态栏的高度
#define kH_StatusBar   20


/*************************************** 导航栏 *************************************/
#pragma mark ---- 导航栏 ----

// 导航栏的高度
#define kH_NavBar 44




#endif
