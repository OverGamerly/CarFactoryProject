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
	}
}

void PoliceData::deleteCar(int index)
{
	if (list != NULL && index >= 0 && index < count)
	{
		Car** temp = new Car*[count - 1];

		for (int i = 0, j = 0; i < count; i++)
		{
			 if (index != i)
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

void PoliceData::CostSort()
{
	Car* temp = new Car();
	int costOne;
	int costTwo;

	for (int i = 0; i < count; i++)
	{

		for (int j = 0; j < count - 1; j++)
		{
			temp = list[j];

			if (list[j]->getCost() > list[j + 1]->getCost())
			{
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void PoliceData::AgeSort()
{
	Car* temp = new Car();

	for (int i = 0; i < count; i++)
	{

		for (int j = 0; j < count - 1; j++)
		{
			temp = list[j];

			if (list[j]->getAge() > list[j + 1]->getAge())
			{
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}