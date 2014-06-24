//
//  Card.h
//  CardCounter
//
//  Created by Benjamin Blattberg on 6/23/14.
//  Copyright (c) 2014 Benjamin Blattberg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic) int points;

- (int)counter;

@end
