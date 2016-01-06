//
//  FactBook.h
//  FunFacts
//
//  Created by Shan on 05.01.16.
//  Copyright © 2016 Shan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;


- (NSString *)randomFact;

@end
