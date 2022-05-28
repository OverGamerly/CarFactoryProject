#include "MainHead.h"
#include "Car.h"
#include "PoliceData.h"

int main()
{
	Car bmw("bmw", "e34", 35, 23546, 25000);
	PoliceData Dep("Department 10");

	Dep.addNewCar(bmw);

	cout << Dep.getInfo() << endl;

	return 0;
}