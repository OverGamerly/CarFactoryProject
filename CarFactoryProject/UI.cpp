#include "UI.h"

void Start()
{
	cout << "\t\t\t\t-  =====   ===  =======  ===      =====   ===  ===== =====  -\n";
	cout << "\t\t\t\t-  =    = =   =    =    =   =     =    = =   = =     =      -\n";
	cout << "\t\t\t\t-  =    = =   =    =    =   =     =====  =   = ==    =====  -\n";
	cout << "\t\t\t\t-  =    = =====    =    =====     =    = =====   === =      -\n";
	cout << "\t\t\t\t-  =    = =   =    =    =   =     =    = =   =     = =      -\n";
	cout << "\t\t\t\t-  ====== =   =    =    =   =     =====  =   = ===== =====  -\n";
	cout << "\t\t\t\t-------------------------------------------------------------";
	cout << endl;
}

void HighPage(tm* ltm)
{
	cout << "\t\t\t\t\t      ===== ===== ===    =  =   =" << endl;
	cout << "\t\t\t\t\t        =   =   = =  =  = =  = =" << endl;
	cout << "\t\t\t\t\t        =   =   = =  = =====  =  " << endl;
	cout << "\t\t\t\t\t        =   ===== ==== =   =  =" << endl;
	cout << "\t\t\t\t\t\t       " + to_string(getYear(ltm)) + "."
		+ to_string(getMonth(ltm)) + "." 
		+ to_string(getDay(ltm)) << endl;
}

void PoliceStatic()
{
	srand(time(NULL));

	cout << "Statistics now: " << endl;
	cout << "==============================================" << endl;
	cout << "Free cars now: " + to_string(rand() % 500 + 500) << endl;
	cout << "Cars in wanted now: " + to_string(rand() % 400 + 100) << endl;
	cout << "Police cars now: " + to_string(rand() % 150 + 50) << endl;
	cout << "==============================================" << endl;
}

void CountOfCars(int count)
{
	cout << "Count of cars in our data base: " + to_string(count) << endl;
}

void CountOfWantedCars(int count)
{
	cout << "Count of wanted cars in our data base: " + to_string(count) << endl;
}

void Menu()
{
	cout << "----------------------------" << endl;
	cout << "==   == ===== ==    = =    =" << endl;
	cout << "= = = = =     = =   = =    =" << endl;
	cout << "=  =  = ===== =  =  = =    =" << endl;
	cout << "=     = =     =   = = =    =" << endl;
	cout << "=     = ===== =    ==  ====" << endl;
	cout << "----------------------------" << endl;
	cout << "1. Add new car" << endl;
	cout << "2. Add new wanted car" << endl;
	cout << "3. Remove car" << endl;
	cout << "4. Cost sort" << endl;
	cout << "5. Age sort" << endl;
	cout << "6. Get Data Base info" << endl;
	cout << "Your choose: ";

}

int getYear(tm* ltm)
{
	return 1900 + ltm->tm_year;
}

int getMonth(tm* ltm)
{
	return 1 + ltm->tm_mon;
}

int getDay(tm* ltm)
{
	return ltm->tm_mday;
}

