// Masive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Задача 1 на одновимірні масиви

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

void PrintArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	cout << "\n";
}

void main()
{
	setlocale(0, ".1251");
	cout << "Input array size: ";
	int arraySize = 0;
	int* array;
	cin >> arraySize;
	array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		printf("array[%d] = ", i);
		cin >> array[i];
	}

	int minValue = array[0], maxValue = array[0];
	int minValueIndex = 0, maxValueIndex = 0;

	PrintArray(array, arraySize);

	for (int i = 1; i < arraySize; i++)
	{
		if (array[i] < minValue)
		{
			minValue = array[i];
			minValueIndex = i;
		}

		if (array[i] > maxValue)
		{
			maxValue = array[i];
			maxValueIndex = i;
		}
	}
	int buffer = minValue;
	array[minValueIndex] = maxValue;
	array[maxValueIndex] = buffer;

	PrintArray(array, arraySize);

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
