#include "WantedPoliceData.h"

WantedPoliceData::WantedPoliceData()
{
	name = "no name";
	count = 0;
	list = NULL;
}

WantedPoliceData::WantedPoliceData(string name)
{
	this->name = name;
	count = 0;
	list = NULL;
}

WantedPoliceData::WantedPoliceData(string name, int count, WantedCar* list)
{
	this->name = name;
	this->count = count;
	this->list = list;
}

WantedPoliceData::~WantedPoliceData()
{
	if (list != NULL)
	{
		delete[] list;
	}
}

string WantedPoliceData::getInfo()
{
	if (list == NULL)
	{
		return "Car park " + name + " is empty";
	}

	string msg = "Car's from " + name + " data:\n";

	for (int i = 0; i < count; i++)
	{
		msg += list[i].getInfo() + "\n";
	}

	return msg;
}



void WantedPoliceData::addNewCar(WantedCar car)
{
	if (list == NULL)
	{
		list = new WantedCar[1];
		count = 1;
		list[0] = car;
	}
	else
	{
		WantedCar* temp = new WantedCar[count + 1];
		int i = 0;
		for (; i < count; i++)
		{
			temp[i] = list[i];
		}
		temp[i] = car;
		delete[] list;
		list = temp;
		count++;
	}
}

void WantedPoliceData::deleteCar(int index)
{
	if (list != NULL && index >= 0 && index < count)
	{
		WantedCar* temp = new WantedCar[count - 1];

		for (int i = 0, j = 0; i < count; i++)
		{
			if (i != count)
			{
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		count--;
	}
}