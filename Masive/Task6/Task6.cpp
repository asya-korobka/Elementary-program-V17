// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Задача 6 на одновимірні масиви

#include <iostream>
#include <math.h>
#include <stdio.h>

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
	for (int i = 0; i < numbersSize; i++);

	int count = 0;
	for (int i = 0; i < numbersSize; i++)

	{
		if (numbers[i] > 3)

			count++;
	}
	cout << "The number of numbers greater than 3 : " << count << endl;

	int maxAbsValue = abs(numbers[0]);
	int maxAbsValueIndex = 0;
	//Searching max abs values with array indexes
	for (int i = 0; i < numbersSize; i++)
	{
		if (abs(numbers[i]) > maxAbsValue)
		{
			maxAbsValue = abs(numbers[i]);
			maxAbsValueIndex = i;
		}
	}
	printf("\nMax abs number: %d; abs value: %d; index: %d\n", numbers[maxAbsValueIndex], maxAbsValue, maxAbsValueIndex);

	int product = 0;
	if (maxAbsValueIndex < numbersSize - 2)
		product = numbers[maxAbsValueIndex + 1];

	for (int i = maxAbsValueIndex+2; i < numbersSize; i++)
	{
		product *= numbers[i];
	}
	printf("\nProduct of all numbers: %d\n", product);
	printf("\nSorted array by descending:\n");
	int buffer = 0;
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

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
