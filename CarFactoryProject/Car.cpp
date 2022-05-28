#include "Car.h"

Car::Car() {
	brand = "no brand";
	model = "no model";
	age = 0;
	secNumber = 0;
	cost = 0;
}

Car::Car(string brand, string model, int age, int secNumber, int cost) {
	this->brand = brand;
	this->model = model;
	this->age = age;
	this->secNumber = secNumber;
	this->cost = cost;
}

Car::~Car() {

}

void Car::setBrand(string brand) {
	this->brand = brand;
}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setAge(int age) {
	this->age = age;
}

void Car::setSecNumber(int secNumber) {
	this->secNumber = secNumber;
}

void Car::setCost(int cost) {
	this->cost = cost;
}

string Car::getBrand() {
	return brand;
}

string Car::getModel() {
	return model;
}

int Car::getAge() {
	return age;
}

int Car::getSecNumber() {
	return secNumber;
}

int Car::getCost() {
	return cost;
}

string Car::getInfo()
{
	return "-------CAR INFO------\nCar brand: " + brand + "\nModel: " + model
		+ "\nAge: " + to_string(age) + "\nCost: " + to_string(cost) + "$\n--------------------";
}