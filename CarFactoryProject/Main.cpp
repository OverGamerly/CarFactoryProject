#define _CRT_SECURE_NO_WARNINGS
#include "MainHead.h"
#include "Car.h"
#include "PoliceData.h"
#include "WantedCar.h"
#include "UI.h"

int main()
{
	Car *car = new Car;
	WantedCar* wCar = new WantedCar;
	time_t now = time(0);
	tm* ltm = localtime(&now);
	PoliceData twpd("City Police Department");
	int choose;

	start:
	Start();
	HighPage(ltm);
	PoliceStatic();
	CountOfCars(twpd.getCount());
	Menu();
	choose = 0;
	while (choose < 1 || choose > 8)
	{
		cin >> choose;
	}
	if (choose == 1)
	{
		system("cls");
		Start();
		HighPage(ltm);
		twpd.addNewCar(car->newCar());
		system("cls");
		goto start;
	}
	if (choose == 2)
	{
		system("cls");
		Start();
		HighPage(ltm);
		twpd.addNewCar(wCar->newCar());
		system("cls");
		goto start;
	}
	if (choose == 3)
	{
		int* index = new int;
		*index = -1;
		while (*index < 0 || *index > twpd.getCount())
		{
			cin >> *index;
		}
		twpd.deleteCar(*index);
		system("cls");
		goto start;
	}
	if (choose == 4)
	{

	}
	if (choose == 7)
	{
		system("cls");
		Start();
		HighPage(ltm);
		cout << twpd.getInfo() << endl;
		_getch();
		system("cls");
		goto start;
	}
	

	return 0;
}