// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Задача 4 на одновимірні масиви

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void PrintArray(int* numbers, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", numbers[i]);
	cout << "\n";
}

void main()
{
	setlocale(0, ".1251");
	cout << "Enter numbers array size: ";
	int numbersSize = 0;
	cin >> numbersSize;
	int* numbers;

	numbers = new int[numbersSize];
	srand((unsigned)time(NULL));
	for (int i = 0; i < numbersSize; i++)
		numbers[i] = rand() % 101 - 50;

	printf("\nGenerated random array:\n");
	PrintArray(numbers, numbersSize);
	int minAbsValue = abs(numbers[0]);
	int minAbsValueIndex = 0;
	//Searching min abs values with array indexes
	for (int i = 0; i < numbersSize; i++)
	{
		if (abs(numbers[i]) < minAbsValue)
		{
			minAbsValue = abs(numbers[i]);
			minAbsValueIndex = i;
		}
	}
	printf("\nMin abs number: %d; abs value: %d; index: %d\n", numbers[minAbsValueIndex], minAbsValue, minAbsValueIndex);


	int sum = 0;
	bool isNegativeNumberFound = false;
	for (int i = 0; i < numbersSize; i++)
	{
		if (isNegativeNumberFound)
			sum += abs(numbers[i]);
		if (!isNegativeNumberFound && numbers[i] < 0)
			isNegativeNumberFound = true;
	}
	printf("\nSum of all numbers: %d\n", sum);

	int segStart, segEnd;
	cout << "Enter segment start start value: ";
	cin >> segStart;
	cout << "end value: ";
	cin >> segEnd;
	int deletedItemsCount = 0;
	for (int i = 0; i < numbersSize - deletedItemsCount; i++)
	{
		while (numbers[i] >= segStart && numbers[i] <= segEnd && i < numbersSize - deletedItemsCount)
		{
			numbers[i] = 0;
			for (int j = i; j < numbersSize - deletedItemsCount; j++)
				numbers[j] = (j == numbersSize - deletedItemsCount - 1) ? 0 : numbers[j + 1];
			
			deletedItemsCount++;
		}
	}
	PrintArray(numbers, numbersSize);
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
