//
//  main.m
//  House
//
//  Created by Marwan Alani on 2017-03-18.
//  Copyright © 2017 Marwan Alani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "House.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        House *myHouse = [[House alloc] init];
        
        NSLog(@"%@", myHouse);
    }
    return 0;
}
