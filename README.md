# WeKit 
## Introduce
- WeKit是我封装各种方法堆积成的库
- 持续更新，看到什么值得封我就喜欢去封一下
- 欢迎fork,Let's 封装 together

## Usage
### Get Hexadecimal Conversion Methods 关于进制转换
> `+ (NSString *)getHexWithDec:(NSInteger)num;`
> `+ (NSInteger)getDecWithHex:(NSString *)aString;`

### Get UIColor Methods 关于UIColor
#### 比原生颜色更柔和养眼
> `+ (UIColor *)getColor:(Color)color;`

#### 快速取得随机颜色
> `+ (UIColor *)getColorRandom;`

#### 通过16进制码取得颜色，形如白色#ffffff
> `+ (UIColor *)getColorByRGBHex:(NSString *)hexString;`

#### 通过ARGB值取得颜色，其中ARGB四值格式为0-255的整数
> `+ (UIColor *)getColorWithRed:(NSInteger)red Green:(NSInteger)green Blue:(NSInteger)blue;`

### Other GET Methods 未分类方法
#### 快速取得一个小按钮，自带属性有：颜色深橘、位置居中、点击变色、四周圆角
> `+ (UIButton *)getButton;`
> `+ (UIButton *)getButtonWithTitle:(NSString *)title Color:(Color)color;`

#### 将网络请求得到的16进制字节流转化为字典
> `+ (NSDictionary *)getDictionaryWithHexData:(NSData *)hexData;`

#### 快速得到屏幕尺寸
> `+ (NSInteger)getScreenHeight;`
> `+ (NSInteger)getScreenWidth;`

#### 得到一个仅有颜色填充的UIImage
+ (UIImage *)getImageColored:(UIColor *)color Size:(CGSize)size;
```