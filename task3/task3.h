#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point2D {
public:
	Point2D();
	Point2D(float x, float y);
	float _x;
	float _y;

	Point2D(const Point2D& p) {//copy construcxtor to add copy points accross in newP
		_x = p._x;
		_y = p._y;
	}
};

class Polyline{
public:
	Polyline();
	Polyline(int length);
	~Polyline() {//destructor
		delete[] _arr;
	};
	Point2D* _arr;
	int sizecount = -1;//does it work inside methods?

	void newP(float NX, float NY) {
		int size = sizeof _arr / sizeof *_arr;
		if (sizecount == size) {
			cout << "Error: array full.\n";
		}
		else {
			_arr[sizecount + 1] = Point2D(NX, NY);//to the end of the array hm
			sizecount++;
		}
	}

	Point2D pFind(int index) {
		return(_arr[index]);
	}

	void delP() {
		if (sizecount == -1) {
			cout << "Error: array has no points.\n";
		}
		else {
			_arr[sizecount + 1] = nullptr;//remove last item?
		}
	}

	bool pExist() {
		if (sizecount == -1) {
			return false;
		}
		else {
			return true;
		}
	}

	int totP() {
		int tot = sizecount + 1;
		return(tot);
	}

	void calculate() {
		float done = 0;
		for (int x = 0; x < sizecount + 1; x++) {
			float done = done + sqrt(pow((_arr[x]._y - _arr[x + 1]._x), 2.0) + pow((_arr[x]._x - _arr[x + 1]._y), 2.0));
		}
		cout << done << "\n";
	}

	void toString() {
		for (int x = 0; x < sizecount + 1; x++) {
			string single = "[" + to_string(_arr[x]._x) + " " + to_string(_arr[x]._y) + "]";
			cout << single;
		}
	}
};