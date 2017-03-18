//
//  House.h
//  House
//
//  Created by Marwan Alani on 2017-03-18.
//  Copyright © 2017 Marwan Alani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface House : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, readonly) int numberOfBedrooms;
@property (nonatomic) BOOL hasHotTub;

@end
