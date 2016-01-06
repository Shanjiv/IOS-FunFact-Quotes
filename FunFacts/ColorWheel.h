//
//  ColorWheel.h
//  FunFacts
//
//  Created by Shan on 05.01.16.
//  Copyright © 2016 Shan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor; 

@end
