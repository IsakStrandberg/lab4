#pragma once
#include <string>

using namespace std;

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

class motorVehicle {
public:
	motorVehicle();
	motorVehicle(float sizelnlitres, int numberOfCylinders, string color, float width, float height, string name, string address, bool allowedToDrive, float* tireDiameters, int numberOfTires, string model);
	//~motorVehicle() {//destructor?
		//delete[] _tireDiameters;
	//};
	//void engine(float sizelnlitres, int numberOfCylinders);
	engine _engine;
	//void body(string color, float width, float height);
	body _body;
	//void owner(string name, string address, bool allowedToDrive);
	owner _owner;
	float* _tireDiameters;
	int _numberOfTires;
	string _model;

	void print() {
		cout << "\n" <<_model << ": \nNumber of tires: " << _numberOfTires;
		cout << "\n";
		for (int x = _numberOfTires; x > 0; x--) {
			cout << "\nTire " << x << "'s tire diameter: " << *_tireDiameters;
			_tireDiameters--;
		}
		cout << "\n";
		cout << "Can hold: " << _engine._sizelnlitres << " litres of gas\n";
		cout << "and has " << _engine._numberOfCylinders << " cylinders.";
		cout << "The vehicles color: " << _body._color << "\nwidth and height: ";
		cout << _body._width << " . " << _body._height;
		cout << "\nOwners name and address: " << _owner._name << ", " << _owner._address;
		if (_owner._allowedToDrive == true) {
			cout << "\nOwner is allowed to drive.";
		}
		else {
			cout << "\nOwner is not allowed to drive";
		}
	}
};





