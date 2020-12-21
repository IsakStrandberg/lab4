#pragma once
#include <string>

using namespace std;

class motorVehicle {
public:
	motorVehicle(float sizelnlitres, int numberOfCylinders, string color, float width, float height, string name, string address, bool allowedToDrive, float* tireDiameters, int numberOfTires, string model);
	//void engine(float sizelnlitres, int numberOfCylinders);
	engine _engine;
	//void body(string color, float width, float height);
	body _body;
	//void owner(string name, string address, bool allowedToDrive);
	owner _owner;
	float* _tireDiameters;
	int _numberOfTires;
	string _model;
};

class engine {
public:
	engine();
	engine(float sizelnlitres, int numberOfCylinders);
	float _sizelnlitres;
	int _numberOfCylinders;
};

class body {
public:
	body();
	body(string color, float width, float height);
	string _color;
	float _width;
	float _height;
};

class owner {
public:
	owner();
	owner(string name, string address, bool allowedToDrive);
	string _name;
	string _address;
	bool _allowedToDrive;
};