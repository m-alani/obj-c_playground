//
//  House.h
//  House
//
//  Created by Marwan Alani on 2017-03-18.
//  Copyright © 2017 Marwan Alani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Bedroom.h"

@interface House : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

@property (nonatomic) Bedroom *frontBedroom;
@property (nonatomic) Bedroom *backBedroom;

-(instancetype)initWithAddress: (NSString*)address;

@end
