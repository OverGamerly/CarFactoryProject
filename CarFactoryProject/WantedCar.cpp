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

WantedCar* WantedCar::newCar()
{
	WantedCar* createCar = new WantedCar;

	string type = "in wanted";
	string brand;
	string model;
	string nameCode;
	int age;
	int cost;
	int secNumber;
	int rating;
	cout << "\t=====   =   =====    == ==  = ==== =====" << endl;
	cout << "\t=      = =  =   =    == = = = =    =   =" << endl;
	cout << "\t=      ===  =====    == = = = ==== =   =" << endl;
	cout << "\t=     =   = ===      == =  == =    =   =" << endl;
	cout << "\t===== =   = =  ==    == =   = =    =====" << endl;
	cout << "\t----------------------------------------" << endl;
	cout << "Car brand: ";
	cin >> brand;
	cout << "Car model: ";
	cin >> model;
	cout << "Car name code: ";
	cin >> nameCode;
	cout << "Car age: ";
	cin >> age;
	cout << "Car cost: ";
	cin >> cost;
	cout << "Car security number: ";
	cin >> secNumber;
	cout << "Car rating: ";
	cin >> rating;
	createCar->setBrand(brand);
	createCar->setModel(model);
	createCar->setNameCode(nameCode);
	createCar->setAge(age);
	createCar->setCost(cost);
	createCar->setSecNumber(secNumber);
	createCar->setRating(rating);

	return createCar;
}
