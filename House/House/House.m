//
//  House.m
//  House
//
//  Created by Marwan Alani on 2017-03-18.
//  Copyright © 2017 Marwan Alani. All rights reserved.
//

#import "House.h"

@interface House()

@property (nonatomic, readwrite) int numberOfBedrooms;

@end

@implementation House

-(instancetype) initWithAddress: (NSString*)address {
    self = [super init];
    if (self) {
        _address = [address copy];
        _numberOfBedrooms = 2;
        _hasHotTub = false;
    }
    return self;
}

@end
