#pragma once
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Point2D {
public:
	Point2D();
	Point2D(float x, float y);
	float _x;
	float _y;
	//custom copier using scary pass by reference
	Point2D(const Point2D& p) {
		_x = p._x;
		_y = p._y;
	}

	//method to calculate distances
	void calculate(float point2x,float point2y) {
		float done = sqrt(pow((point2x - _x), 2.0) + pow((point2y - _y), 2.0));
		cout << done << "\n";
	}
	

	//method that returns x and y as A SINGLE string
	string toString() {
		string single = "[" + to_string(_x) + " " + to_string(_y) + "]";
		return(single);
	}

	Point2D operator+ (const Point2D& p); 
		
	

	Point2D& operator= (const Point2D& p); //reference point2d at the start?
		
	

	bool operator== (const Point2D& p); 
		
	
};