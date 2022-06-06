#pragma once
#include "MainHead.h"

class Car
{
private:
	string type;
	string brand;
	string model;
	int age;
	int secNumber;
	int cost;
public:
	Car();
	Car(string brand, string model, int age, int secNumber, int cost);
	~Car();

	void setBrand(string brand);
	void setModel(string model);
	void setAge(int age);
	void setSecNumber(int secNumber);
	void setCost(int cost);

	string getBrand();
	string getModel();
	int getAge();
	int getSecNumber();
	int getCost();
	string getType();

	Car newCar();

	virtual string getInfo();

};

