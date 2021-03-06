// tesscv.cpp:
// Using Tesseract API with OpenCV

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <baseapi.h>

int main(int argc, char** argv)
{
	 
	// Load image
	cv::Mat im = cv::imread("C:\\Users\\dleiva\\Documents\\Visual Studio 2013\\Projects\\TestOCRTesseract\\streetsign.jpg");
	if (im.empty())
	{
		std::cout << "Cannot open source image!" << std::endl;
		return -1;
	}
	
	cv::Mat gray;
	cv::cvtColor(im, gray, CV_BGR2GRAY);
	// ...other image pre-processing here...

	/*
	// Pass it to Tesseract API
	tesseract::TessBaseAPI tess;
	tess.Init(NULL, "eng", tesseract::OEM_DEFAULT);
	tess.SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);
	tess.SetImage((uchar*)gray.data, gray.cols, gray.rows, 1, gray.cols);

	// Get the text
	char* out = tess.GetUTF8Text();
	std::cout << out << std::endl;
	*/
	return 0;
}