//
//  DetailViewController.h
//  Apple
//
//  Created by Girija Selvakumar on 06/05/2016.
//  Copyright © 2016 Girija Selvakumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

