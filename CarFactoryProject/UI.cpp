#include "UI.h"

void Start()
{
	cout << "\t\t\t\t-  *****   ***  *******  ***      *****   ***  ***** *****  -\n";
	cout << "\t\t\t\t-  *    * *   *    *    *   *     *    * *   * *     *      -\n";
	cout << "\t\t\t\t-  *    * *   *    *    *   *     *****  *   * **    *****  -\n";
	cout << "\t\t\t\t-  *    * *****    *    *****     *    * *****   *** *      -\n";
	cout << "\t\t\t\t-  *    * *   *    *    *   *     *    * *   *     * *      -\n";
	cout << "\t\t\t\t-  ****** *   *    *    *   *     *****  *   * ***** *****  -\n";
	cout << "\t\t\t\t-------------------------------------------------------------";
	cout << endl;
}

void HighPage(tm* ltm)
{
	cout << "----- *  -- -- ---" << endl;
	cout << "  -   -  - - - ---" << endl;
	cout << "  -   -  -   - ---" << endl;
	cout << "  -   -  -   - ---" << endl;
	cout << to_string(getYear(ltm)) + "." 
		+ to_string(getMonth(ltm)) + "." 
		+ to_string(getDay(ltm)) << endl;

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

