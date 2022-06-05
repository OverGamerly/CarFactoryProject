#pragma once
#include "Car.h"

class WantedCar : public Car
{
private:
	string type;
	int rating;
	string nameCode;
public:
	WantedCar();
	WantedCar(int rating, string nameCode, string brand, string model, int age, int secNumber, int cost);

	int getRating();
	string getNameCode();

	void setRating(int rating);
	void setNameCode(string nameCode);

	string getInfo() override;
};

