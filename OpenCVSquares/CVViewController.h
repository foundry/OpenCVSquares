//
//  CVViewController.h
//  CVOpenTemplate
//
//  Created by Washe on 02/01/2013.
//  Copyright (c) 2013 Washe / Foundry. All rights reserved.
//
//  Permission is given to use this source code file without charge in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@interface CVViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIProgressView *progressView;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@property (weak, nonatomic) IBOutlet UIView *controlsView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView* spinner;

@property (weak, nonatomic) IBOutlet UISegmentedControl *accuracySelector;

@property (assign) CGFloat tolerance;
@property (assign) int levels;
@property (assign) int threshold;

- (IBAction)imageTapped:(id)sender;

- (IBAction)accuracyChanged:(id)sender;
- (int)accuracy;

@property (weak, nonatomic) IBOutlet UISlider *toleranceSlider;
@property (weak, nonatomic) IBOutlet UILabel *toleranceLabel;
- (IBAction)toleranceChanged:(id)sender;
- (IBAction)toleranceTouchDragInside:(id)sender;


@property (weak, nonatomic) IBOutlet UISlider *levelsSlider;
@property (weak, nonatomic) IBOutlet UILabel *levelsLabel;
- (IBAction)levelsChanged:(id)sender;
- (IBAction)levelsTouchDragInside:(id)sender;

@property (weak, nonatomic) IBOutlet UISlider *thresholdSlider;
@property (weak, nonatomic) IBOutlet UILabel *thresholdLabel;
- (IBAction)thresholdChanged:(id)sender;
- (IBAction)thresholdTouchDragInside:(id)sender;



@end
