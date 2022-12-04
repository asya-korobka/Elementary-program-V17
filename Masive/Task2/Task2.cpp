// Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Задача 2 на одновимірні масиви

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
	cout << "Enter numbers array size: ";
	int numbersSize = 0;
	int* numbers;
	cin >> numbersSize;
	numbers = new int[numbersSize];

	for (int i = 0; i < numbersSize; i++)
		numbers[i] = rand() % 3;

	int buffer = 0;
	PrintArray(numbers, numbersSize);
	for (int i = 0; i < numbersSize; i++)
		for (int j = 0; j < numbersSize - i - 1; j++)
			if (numbers[j] > numbers[j + 1])
			{
				buffer = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = buffer;
			}
	PrintArray(numbers, numbersSize);
	system("pause>>void");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: O
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
