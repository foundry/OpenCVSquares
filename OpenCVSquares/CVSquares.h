//
//  CVSquares.h
//  OpenCVClient
//
//  Created by Washe on 30/12/2012.
//  Copyright (c) new foundry ltd. All rights reserved.
//
//  Permission is given to use this source code file without charge in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#ifndef __OpenCVClient__JMSquares__
#define __OpenCVClient__JMSquares__

    //#include <iostream>

    //class definition
    //in this example we do not need a class
    //as we have no instance variables and just one static function.
    //We could instead just declare the function but this form seems clearer

class CVSquares
{
public:
    static cv::Mat detectedSquaresInImage (cv::Mat image, float tol, int threshold, int levels, int accuracy);
};

#endif /* defined(__OpenCVClient__JMSquares__) */
