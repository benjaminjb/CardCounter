//
//  Deck.h
//  CardCounter
//
//  Created by Benjamin Blattberg on 6/23/14.
//  Copyright (c) 2014 Benjamin Blattberg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;

@end
