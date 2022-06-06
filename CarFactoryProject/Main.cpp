#define _CRT_SECURE_NO_WARNINGS
#include "MainHead.h"
#include "Car.h"
#include "PoliceData.h"
#include "WantedCar.h"
#include "WantedPoliceData.h"
#include "UI.h"

int main()
{
	Car car;
	time_t now = time(0);
	tm* ltm = localtime(&now);
	PoliceData twpd("City Police Department");
	WantedPoliceData twwpd("City Police Department.W");

	start:
	Start();
	HighPage(ltm);
	PoliceStatic();
	CountOfCars(twpd.getCount());
	CountOfWantedCars(twwpd.getCount());
	Menu();
	
	return 0;
}