// CMakeProject1.cpp: определяет точку входа для приложения.
//
#include <opencv2/highgui.hpp>
#include "CMakeProject1.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl
	auto i = cv::imread("E:\\student\\picta.png");
	i = 255 - i; // инверсия изображения
	cv::imwrite("E:\\student\\img.bmp", i);

	return 0;
}