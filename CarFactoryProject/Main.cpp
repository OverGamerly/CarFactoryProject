#define _CRT_SECURE_NO_WARNINGS
#include "MainHead.h"
#include "Car.h"
#include "PoliceData.h"
#include "WantedCar.h"
#include "WantedPoliceData.h"
#include "UI.h"

int main()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	Start();
	HighPage(ltm);

	return 0;
}