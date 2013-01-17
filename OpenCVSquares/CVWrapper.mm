//
//  CVWrapper.mm
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

#import "CVWrapper.h"
#import "CVSquares.h"
#import "UIImage+OpenCV.h"

    //remove 'magic numbers' from original C++ source so we can manipulate them from obj-C
#define TOLERANCE 0.3
#define THRESHOLD 50
#define LEVELS 9
#define ACCURACY 0

@implementation CVWrapper

+ (UIImage*) detectedSquaresInImage:(UIImage*) image
{
        //if we call this method with no parameters,
        //we use the defaults from the original c++ project
    return [[self class] detectedSquaresInImage:image
                                      tolerance:TOLERANCE
                                      threshold:THRESHOLD
                                         levels:LEVELS
                                       accuracy:ACCURACY];
    
}


+ (UIImage*) detectedSquaresInImage:(UIImage*) image
                          tolerance:(CGFloat)  tolerance
                          threshold:(NSInteger)threshold
                             levels:(NSInteger)levels
                           accuracy:(NSInteger)accuracy

{
        //NSLog (@"detectedSquaresInImage");
    UIImage* result = nil;
    cv::Mat matImage = [image CVMat];
    
    
    matImage = CVSquares::detectedSquaresInImage (matImage, tolerance, threshold, levels, accuracy);
       
    
    result = [UIImage imageWithCVMat:matImage];
        //NSLog (@"detectedSquaresInImage result");
    
    return result;
    
}


@end
