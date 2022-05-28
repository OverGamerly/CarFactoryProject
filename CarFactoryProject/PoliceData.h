#pragma once
#include "Car.h"

class PoliceData
{
private:
	string name;
	int count;
	Car* list;
public:

	PoliceData();
	PoliceData(string name);
	PoliceData(string name, int count, Car* list);
	~PoliceData();

	string getInfo();

	void addNewCar(Car car);
	void deleteCar(int index);

};

