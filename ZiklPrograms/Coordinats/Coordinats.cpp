// Coordinats.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Завдання 2 на циклічні оператори 
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(0, ".1251");
	double x, y, r;
	cout << "Input point coordinates\nx = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "Input circles radius R: ";
	cin >> r;


	if ((x >= -r && x <= 0 && y >= 0 && y <= r && ((pow(x + r, 2) + pow(y - r, 2)) >= pow(r, 2)))
		|| (x >= 0 && x <= r && y <= 0 && y >=-r && (pow(x - r, 2) + pow(y + r, 2) >= pow(r, 2))))
		printf("Point with coordinates (%.2f, %.2f) is included in figure", x, y);

	else
		printf("Point with coordinates (%.2f, %.2f) is NOT included in figure", x, y);
	system("pause>>void");

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
