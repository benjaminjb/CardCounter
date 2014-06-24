//
//  PlayingCard.h
//  CardCounter
//
//  Created by Benjamin Blattberg on 6/23/14.
//  Copyright (c) 2014 Benjamin Blattberg. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
