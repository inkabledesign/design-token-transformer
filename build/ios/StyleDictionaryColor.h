
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Wed, 13 Jan 2021 17:54:26 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorsWhite6,
ColorsWhite24,
ColorsWhite100,
ElevationBase0Color,
ElevationBase1Color,
ElevationSml0Color,
ElevationSml1Color,
ElevationLrg0Color,
ElevationLrg1Color
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
