//
//  LocationPickerView.h
//  LocationPickerView
//
//  Created by hejintao on 2017/3/21.
//  Copyright © 2017年 hither. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LocationPickerView : UIView

@property (nonatomic,copy) void (^completion) (NSString *provinceName, NSString *cityName,NSString *countryName);


/**
 显示 省  市  县

 @param provinceName 省
 @param cityName 市
 @param countyName 县
 */
- (void)showPickerWithProvinceName:(NSString *)provinceName cityName:(NSString *)cityName countyName:(NSString *)countyName;

@end
