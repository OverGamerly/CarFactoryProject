#include "WantedCar.h"


WantedCar::WantedCar()
{
}

WantedCar::WantedCar(int rating, string nameCode, string brand, string model, int age, int secNumber, int cost) : Car(brand, model, age, secNumber, cost)
{
	this->rating = rating;
	this->nameCode = nameCode;
	type = "in wanted";
}

int WantedCar::getRating()
{
	return rating;
}

string WantedCar::getNameCode()
{
	return nameCode;
}

void WantedCar::setRating(int rating)
{
	this->rating = rating;
}

void WantedCar::setNameCode(string nameCode)
{
	this->nameCode = nameCode;
}

string WantedCar::getInfo() 
{
	return "-------CAR INFO------\nCar type: " + type + "\nCar brand: " + getBrand() + "\nModel: " + getModel()
		+ "\nAge: " + to_string(getAge()) + "\nCost: " + to_string(getCost()) + "$"
		+ "\nRating: " + to_string(getRating()) + "wp" + "\nName code: " + getNameCode() + "\n--------------------";
}
