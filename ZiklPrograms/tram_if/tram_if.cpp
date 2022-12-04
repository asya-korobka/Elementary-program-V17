// tram_if.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Завдання 1 на циклічні оператори методом if

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	int tram_number;
	cout << "Enter the tram number (7,10,23,29): ";
	cin >> tram_number;

		if (tram_number == 7)
			cout << "Lesi Nikityk str. - Miloslavska str." << endl;
		else if (tram_number == 10)
			cout << "Mitropoliten - Poznyaki" << endl;
		else if (tram_number == 23)
			cout << "Chornovil str - Globus" << endl;
		else if (tram_number == 29)
			cout << "GidroPark - Livoberezhna" << endl;
		else
			cout << "Try to enter a valid number of tram" << endl;

	system("pause>>void");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
