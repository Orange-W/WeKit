# WeKit 
## Introduce
- WeKit是个乱七八糟的封装Library
- 持续更新，看到什么值得封我就去封一下
- 欢迎fork,让我们来一起封装吧

## Usage
### Get Hexadecimal Conversion Methods 关于进制转换

``` objective-c 
// 十进制转十六进制
+ (NSString *)getHexWithDec:(NSInteger)num;
// 十六进制转十进制
+ (NSInteger)getDecWithHex:(NSString *)aString;
```

### Get UIColor Methods 关于UIColor

``` objective-c
// 比原生颜色更柔和养眼
+ (UIColor *)getColor:(Color)color;
// 快速取得随机颜色
+ (UIColor *)getColorRandom;
// 通过16进制码取得颜色，形如白色#ffffff
+ (UIColor *)getColorByRGBHex:(NSString *)hexString;
// 通过ARGB值取得颜色，其中ARGB四值格式为0-255的整数
+ (UIColor *)getColorWithRed:(NSInteger)red Green:(NSInteger)green Blue:(NSInteger)blue;
```

### Other GET Methods 未分类方法

``` objective-c
// 快速取得一个小按钮，特性有：颜色深橘、位置居中、点击变色、四周圆角
+ (UIButton *)getButton;
+ (UIButton *)getButtonWithTitle:(NSString *)title Color:(Color)color;
// 将网络请求得到的16进制字节流转化为字典
+ (NSDictionary *)getDictionaryWithHexData:(NSData *)hexData;
// 快速得到屏幕尺寸
+ (NSInteger)getScreenHeight;
+ (NSInteger)getScreenWidth;
// 得到一个仅有颜色填充的UIImage
+ (UIImage *)getImageColored:(UIColor *)color Size:(CGSize)size;
```
