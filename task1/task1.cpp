#include <iostream>
#include <string>
#include "task1.h"
using namespace std;

void print(string THECAR) 
{
	//
}

motorVehicle::motorVehicle(float sizelnlitres, int numberOfCylinders, string color, float width, float height, string name, string address, bool allowedToDrive, float* tireDiameters, int numberOfTires, string model)
{
	_engine._sizelnlitres = sizelnlitres;
	_engine._numberOfCylinders = numberOfCylinders;

	_body._color = color;
	_body._width = width;
	_body._height = height;

	_owner._name = name;
	_owner._address = address;
	_owner._allowedToDrive = allowedToDrive;

	_numberOfTires = numberOfTires;
	for (int x = 0; x < numberOfTires; x++) {//will this work?
		_tireDiameters = tireDiameters;
		tireDiameters++;
		_tireDiameters++;
	}
	_model = model;
}

engine::engine(float sizelnlitres, int numberOfCylinders)
{
	_sizelnlitres = sizelnlitres;
	_numberOfCylinders = numberOfCylinders;
}
engine::engine()//def
{
	_sizelnlitres = 1;
	_numberOfCylinders = 1;
}

body::body(string color, float width, float height) 
{
	_color = color;
	_width = width;
	_height = height;
}
body::body()//def
{
	_color = "white";
	_width = 1;
	_height = 1;
}

owner::owner(string name, string address, bool allowedToDrive) {
	_name = name;
	_address = address;
	_allowedToDrive = allowedToDrive;
}
owner::owner() //def
{
	_name = "jack";
	_address = "bikinibottom";
	_allowedToDrive = false;
}

int main() {
	cout << "Please provide info for 3 different vehicles";
	for (int x = 0; x < 3; x++){
		cout << "engine's gas capacity in litres: ";
		float sizelnlitres;
		cin >> sizelnlitres;
		cout << "\n";

		cout << "engine's number of cylinders: ";
		int numberOfCylinders;
		cin >> numberOfCylinders;
		cout << "\n";

		cout << "the vehicle's color: ";
		string color;
		cin >> color;
		cout << "\n";

		cout << "the vehicle's width: ";
		float width;
		cin >> width;
		cout << "\n";

		cout << "the vehicle's height: ";
		float height;
		cin >> height;
		cout << "\n";

		cout << "the owners name: ";
		string name;
		cin >> name;
		cout << "\n";

		cout << "the owners address: ";
		string address;
		cin >> address;
		cout << "\n";

		cout << "is the ownder allowed to drive? (true/false) ";
		bool allowedToDrive;
		cin >> allowedToDrive;
		cout << "\n";

		cout << "model of the vehicle: ";
		string model;
		cin >> model;
		cout << "\n";

		cout << "number of tires: ";
		int numberOfTires;
		cin >> numberOfTires;
		cout << "\n";

		float* tireDiameters;
		tireDiameters = new float[numberOfTires];
		for (int tire = 0; tire < numberOfTires; tire++) {//will it work?
			cout << "width of tire " << tire << ":";
			cin >> tireDiameters[tire];
		}

		cout << "What's the cars name?: ";
		string carname;
		cin >> carname;
		cout << "\n";

		motorVehicle carname (sizelnlitres,numberOfCylinders,color,width,height,name,address,allowedToDrive,tireDiameters,numberOfTires,model);

		int y;
		string CARS[3];
		CARS[y] = carname;
		y++;
	}
	//print here
}