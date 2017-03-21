//
//  LocationAddressManager.m
//  LocationPickerView
//
//  Created by hejintao on 2017/3/21.
//  Copyright © 2017年 hither. All rights reserved.
//

#import "LocationAddressManager.h"

@implementation LocationAddressManager

+ (instancetype)shareInstance {
    static LocationAddressManager *_addressManager = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _addressManager = [[self alloc] init];
    });
    return _addressManager;
}

- (NSArray *)provinceDicAry {
    if (!_provinceDicAry) {
        NSString *path = [[NSBundle mainBundle] pathForResource:@"address" ofType:@"plist"];
        _provinceDicAry = [[NSArray alloc] initWithContentsOfFile:path];
    }
    return _provinceDicAry;
}

@end
