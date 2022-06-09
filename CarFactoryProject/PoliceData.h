#pragma once
#include "Car.h"

class PoliceData
{
protected:
	string name;
	int count;
	Car** list;
public:

	PoliceData();
	PoliceData(string name);
	PoliceData(string name, int count, Car** list);
	~PoliceData();

	string getInfo();
	int getCount();

	void addNewCar(Car* car);
	void deleteCar(int index);

	void CostSort();
	void AgeSort();
};

