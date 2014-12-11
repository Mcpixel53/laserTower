#ifndef RGB_DETECTOR_H
#define RGB_DETECTOR_H

#include <opencv2/opencv.hpp>

cv::Mat extractChannel(cv::Mat,int);
cv::Mat detectColorRGB(std::string, cv::Mat);
cv::Mat1b dilation(cv::Mat1b,int);

std::vector<cv::Point> getTarget(std::string, cv::Mat);



#endif // RGB_DETECTOR_H
