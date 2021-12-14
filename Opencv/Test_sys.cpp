#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace std;
using namespace cv;


int main()
{
	VideoCapture cap(0);
	Mat img;


	CascadeClassifier faceCascade;
	faceCascade.load("Res/haarcascade_frontalface_alt2.xml");
	vector<Rect> faces;
	while (true)
	{
		cap.read(img);
		faceCascade.detectMultiScale(img, faces, 1.09, 10);
		for (int i = 0; i < faces.size(); i++)
		{
			Mat imgCr = img(faces[i]);
			imshow(to_string(i), imgCr);
			imwrite("Res/hlebalo/" + to_string(i) + ".png", imgCr);
			rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 234), 3);
		}


		imshow("Image", img);
		waitKey(1);
	}
	return 0;
}