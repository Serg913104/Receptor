#include <iostream>
#include <fstream>
#include <string>

#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/dnn.hpp>

#include "test.hpp"

using namespace cv;
using namespace std;
using namespace cv::dnn;

const char* cmdAbout = "Sample of OpenCV usage. ";

const char* cmdOptions =
"{ i  image                             | <none> | image to process                  }"
"{ w  width                             |        | image width for classification    }"
"{ h  heigth                            |        | image heigth fro classification   }"
"{ model_path                           |        | path to model                     }"
"{ config_path                          |        | path to model configuration       }"
"{ label_path                           |        | path to class labels              }"
"{ q ? help usage                       |        | print help message                }";


int main(int argc, char** argv) {

	/*// Process input arguments
	CommandLineParser parser(argc, argv, cmdOptions);
	parser.about(cmdAbout);

	if (parser.has("help")){
		parser.printMessage();
		return 0;
	}
	if (!parser.check()){
		parser.printErrors();
		return 0;
	}

	// Load image and init parameters

	string path_model(parser.get<String>("model_path"));
	string path_config(parser.get<String>("config_path"));
	string path_label(parser.get<String>("label_path"));
	string path_image(parser.get<String>("i"));
	int width(parser.get<int>("w"));
	int height(parser.get<int>("h"));
	int backendId = DNN_BACKEND_OPENCV;
	int targetID = DNN_TARGET_CPU;

	Net net = readNet(path_model, path_config);
	net.setPreferableBackend(backendId);
	net.setPreferableTarget(targetID);

	Mat pic = imread(path_image);
	Mat blob;
	double scale = 1.0;
	Size spatial_size = Size(224,224);
	Scalar mean = { 103.94,116.78,123.68 };
	bool swapRB = false;
	bool crop = false;
	int  ddepth = CV_32F;

	blobFromImage(pic, blob, scale, spatial_size, mean, swapRB, crop, ddepth);
	net.setInput(blob);
	Mat prob = net.forward();*/
	HELLO();
	return 0;
}