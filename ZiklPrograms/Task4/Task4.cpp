// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Завдання 4 на циклічні оператори 
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

double f_x(int k)
{
	return 0.7 * (log10(abs(6 + k))) + cos(4.6 * k);
}

int main()
{
	setlocale(0, ".1251");
	const int i = 17;
	cout << "i: " << i << endl;

	double a = 0;
	for (int k = i; k <= i + 5; k++)
	{
		a += f_x(k);
	}
	printf("a = %.2f\n", a);

	double b = 0;
	for (int k = i; k <= i + 8; k++)
	{
		b += f_x(k);
	}
	printf("b = %.2f\n", b);

   double z = 4 * b * a - b;

   printf("z = %.2f\n", z);
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
