// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "task3.h"

using namespace std;

Point2D::Point2D(float x, float y) {
	_x = x;
	_y = y;
}
Point2D::Point2D() {//def
	_x = 0.0;
	_y = 0.0;
}

Polyline::Polyline(int length) {
	_arr = new float[length];
}
Polyline::Polyline() {
	_arr = new float[0];
}
//Polyline::~Polyline() {//destructor?
	//delete[] _arr;
//}