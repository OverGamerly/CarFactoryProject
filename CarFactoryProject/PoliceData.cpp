#include "PoliceData.h"

PoliceData::PoliceData()
{
	name = "no name";
	count = 0;
	list = NULL;
}

PoliceData::PoliceData(string name) 
{
	this->name = name;
	count = 0;
	list = NULL;
}

PoliceData::PoliceData(string name, int count, Car** list)
{
	this->name = name;
	this->count = count;
	this->list = list;
}

PoliceData::~PoliceData()
{
	if (list != NULL)
	{
		delete[] list;
	}
}

int PoliceData::getCount()
{
	return count;
}

string PoliceData::getInfo()
{
	if (list == NULL)
	{
		return "Car park " + name + " is empty";
	}

	string msg = "Car's from " + name + " data:\n";

	for (int i = 0; i < count; i++)
	{
		msg += "Index: " + to_string(i) + "\n" + list[i]->getInfo() + "\n";
	}

	return msg;
}



void PoliceData::addNewCar(Car* car)
{
	if (list == NULL)
	{
		list = new Car*[1];
		count = 1;
		list[0] = car;
	}
	else
	{
		Car** temp = new Car*[count + 1];
		int i = 0;
		for (; i < count; i++)
		{
			temp[i] = list[i];
		}
		temp[i] = car;
		delete[] list;
		list = temp;
		count++;
		delete[] temp;
	}
}

void PoliceData::deleteCar(int index)
{
	if (list != NULL && index >= 0 && index < count)
	{
		Car** temp = new Car*[count - 1];

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
		delete[] temp;
	}
}