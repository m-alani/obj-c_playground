//
//  Bedroom.h
//  House
//
//  Created by Marwan Alani on 2017-03-18.
//  Copyright © 2017 Marwan Alani. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, Direction) {
    North,
    West,
    South,
    East
};

@interface Bedroom : NSObject

@property (nonatomic) BOOL hasPrivateBath;
@property (nonatomic) Direction directionWindowFaces;

@end
