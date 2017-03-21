//
//  LocationAddressManager.h
//  LocationPickerView
//
//  Created by hejintao on 2017/3/21.
//  Copyright © 2017年 hither. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocationAddressManager : NSObject

+ (instancetype)shareInstance;
//省字典数组
@property (nonatomic,strong) NSArray *provinceDicAry;

#define HJTAddressManager [LocationAddressManager shareInstance]

@end
