// task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "task2.h"
using namespace std;

Point2D::Point2D(float x,float y) {
	_x = x;
	_y = y;
}
Point2D::Point2D() {
	_x = 0.0;
	_y = 0.0;
}
Point2D Point2D::operator+(const Point2D& p) {
	Point2D plus;
	plus._x = this->_x + p._x;//"this" operator calculates...that
	plus._y = this->_y + p._y;
	return plus;
}
Point2D& Point2D::operator=(const Point2D& p) {
	_x = p._x;
	_y = p._y;
	return *this;//returns reference to object
}
bool Point2D::operator==(const Point2D& p) {
	return (_x == p._x && _y == p._y);
}

int main() 
{
	//1
	Point2D uno;
	Point2D dos;
	uno._x = 6.0;
	uno._y = 2.0;
	dos._x = 11.0;
	dos._y = 5.0;
	uno.calculate(dos._x, dos._y);
	
	//2
	Point2D copy = uno;

	//3
	cout << copy.toString();

	//4
	Point2D tres = uno + dos;

	//5
	cout << tres._x << " " << tres._y << "\n";
	tres.calculate(uno._x, uno._y);

	//6uuhhhh
	cout << tres._x << " " << tres._y;
	cout << dos._x << " " << dos._y;
}