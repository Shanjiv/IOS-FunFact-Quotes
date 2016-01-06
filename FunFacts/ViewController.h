//
//  ViewController.h
//  FunFacts
//
//  Created by Shan on 03.01.16.
//  Copyright © 2016 Shan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@property (strong, nonatomic) ColorWheel *colorWheel;


@property (weak, nonatomic) IBOutlet UIButton *FunFactButton;

@end

