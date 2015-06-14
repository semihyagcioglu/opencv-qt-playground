#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

// Detect corners in the given given image
int main(int, char**)
{
    /// Load source image and convert it to gray
    //src = imread( argv[1], 1 );
    //cvtColor( src, src_gray, COLOR_BGR2GRAY );

    const string& filePath= "/Users/semih/GitHub/opencv-qt-playground/02-corner-detection/lena.jpg";
    Mat gray = imread(filePath, 0);

    // parameters for Shi-Tomasi algorithm
    vector<Point2f> corners;
    double qualityLevel = 0.2;
    double minDistance = 10;
    int blockSize = 3;
    bool useHarrisDetector = false;
    double k = 0.04;
    int maxCorners = 50;
    Mat copy;
    copy = gray.clone();

    // detect corners
    goodFeaturesToTrack(gray,
                   corners,
                   maxCorners,
                   qualityLevel,
                   minDistance,
                   Mat(),
                   blockSize,
                   useHarrisDetector,
                   k );

    int r = 2;

    for( size_t i = 0; i < corners.size(); i++ )
    {
        circle( copy, corners[i], r, Scalar(255, 255, 255), -1, 8, 0 );
    }

    imshow("Detected Corners", copy );

    waitKey(0);
    return(0);
}
