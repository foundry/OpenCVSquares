__OpenCV computer vision with iOS__  

24 Jan 2017
Updated for XCode 8.2

16 Jan 2013   
Repo had become a mess. Trashed it with a fresh commit.

9 Jan 2013  
added fast vs accurate comparisons  
fast omits canny and only scans 1 colour plane  
accurate includes canny and scans all colours  

2 Jan 2013  
openCV library compiled from latest gitHub clone 

Requirements: OSX10.7+ XCode4.4+ iOS5.0+  
For XCode4.2/Snow Leopard see [OpenCVSquaresSL](https://github.com/foundry/OpenCVSquaresSL)


__integrating openCV and C++ with objective-C__
           

This is a sample application using openCV in iOS. It adapts the "squares.cpp" sample code included with the openCV distribution.
<https://github.com/Itseez/opencv/blob/master/samples/cpp/squares.cpp>

Prompted from a question on stack overflow:

<http://stackoverflow.com/questions/13958321/iosretrieve-rectangle-shaped-image-from-the-background-image?lq=1>

=======================

The aim is to keep the original c++ code as pristine as possible, and to keep the bulk of the work with openCV in pure c++ files for (im)portability.

__CVViewController.h / CVViewController.m__

- pure Objective-C

- communicates with openCV c++ code via a WRAPPER... it neither knows nor cares that c++ is processing these method calls behind the wrapper.

__CVWrapper.h / CVWrapper.mm__

- objective-C++

does as little as possible, really only two things...

- calls to UIImage objC++ categories to convert to and from UIImage <> cv::Mat
- mediates between CVViewController's obj-C methods and CVSquares c++ (class) function calls
  
 
__CVSquares.h /  CVSquares.cpp__  

- pure C++
- `CVSquares.cpp` declares public functions inside a class definition (in this case, one static function).   
This replaces the work of  `main{}` in the original file.
-  We try to keep `CVSquares.cpp` as close as possible to the C++ original for portability.

	
__UIImage+OpenCV__
    
This UIImage category is an objC++  file containing the code to convert between UIImage and cv::Mat image formats. 

