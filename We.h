//
//  MyTool.h
//  Class5
//
//  Created by RainyTunes on 8/12/15.
//  Copyright (c) 2015 RainyTunes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, Color) {
    Red = 0,
    Pink = 1,
    Purple = 2,
    PurpleDeep = 3,
    Indigo = 4,
    Blue = 5,
    BlueLight = 6,
    Cyan = 7,
    Teal = 8,
    Green = 9,
    GreenLight = 10,
    Lime = 11,
    Yellow = 12,
    Amber = 13,
    Orange = 14,
    OrangeDeep = 15,
    Brown = 16,
    Grey = 17,
    BlueGrey = 18,
};

@interface We : NSObject
/**
 Get Method
 **/

//Get Hexadecimal Conversion Methods
+ (NSString *)getHexWithDec:(NSInteger)num;
+ (NSInteger)getDecWithHex:(NSString *)aString;
//Get UIColor Methods
+ (UIColor *)getColor:(Color)color;
+ (UIColor *)getColorRandom;
+ (UIColor *)getColorByRGBHex:(NSString *)hexString;
+ (UIColor *)getColorWithRed:(NSInteger)red Green:(NSInteger)green Blue:(NSInteger)blue;
//Get Others Methods
+ (UIButton *)getButton;
+ (UIButton *)getButtonWithTitle:(NSString *)title Color:(Color)color;
+ (NSDictionary *)getDictionaryWithHexData:(NSData *)hexData;
+ (NSInteger)getScreenHeight;
+ (NSInteger)getScreenWidth;
+ (UIImage *)getImageColored:(UIColor *)color Size:(CGSize)size;
@end
