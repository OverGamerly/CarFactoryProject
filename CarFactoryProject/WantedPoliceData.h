#pragma once
#include "WantedCar.h"

class WantedPoliceData
{
private:
	string name;
	int count;
	WantedCar* list;
public:

	WantedPoliceData();
	WantedPoliceData(string name);
	WantedPoliceData(string name, int count, WantedCar* list);
	~WantedPoliceData();

	string getInfo();

	void addNewCar(WantedCar car);
	void deleteCar(int index);
};

