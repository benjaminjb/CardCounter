//
//  Card.m
//  CardCounter
//
//  Created by Benjamin Blattberg on 6/23/14.
//  Copyright (c) 2014 Benjamin Blattberg. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

- (int)counter {
    
    NSString *rank = [self.contents substringToIndex:[self.contents length]-1];
    int card = [rank intValue];
    if ((card >= 2) && (card <= 9))
    {
        return 1;
    } else {
    return -1;
    }
}

@end
