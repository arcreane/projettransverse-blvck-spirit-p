#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;
using namespace std;

void main() {

	VideoCapture cap(0);
	Mat img;

	while (true) {
		
		cap.read(img);

		imshow("Image", img);
		waitKey(1);
	}


}
