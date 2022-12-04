// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Задача 5 на одновимірні масиви

#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

void PrintArray(double* numbers, int size)
{
	for (int i = 0; i < size; i++)
		printf("%.1f ", numbers[i]);
	cout << "\n";
}

void main()
{
	setlocale(0, ".1251");
	cout << "Enter numbers array size: ";
	int numbersSize = 0;
	cin >> numbersSize;
	double* numbers;

	numbers = new double[numbersSize];
	srand((unsigned)time(NULL));
	for (int i = 0; i < numbersSize; i++)
		numbers[i] = ((double)(rand() % 1001 - 500))/10.0f;

	printf("\nGenerated random array:\n");
	PrintArray(numbers, numbersSize);

	double maxAbsValue = fabs(numbers[0]);
	int maxAbsValueIndex = 0;

	//Searching max abs value with array index
	for (int i = 0; i < numbersSize; i++)
	{
		if (fabs(numbers[i]) > maxAbsValue)
		{
			maxAbsValue = fabs(numbers[i]);
			maxAbsValueIndex = i;
		}
	}
	printf("\nMax abs number: %.1f; abs value: %.1f; index: %d\n", numbers[maxAbsValueIndex], maxAbsValue, maxAbsValueIndex);

	double sum = 0;
	bool isPositiveNumberFound = false;
	for (int i = 0; i < numbersSize; i++)
	{
		if (isPositiveNumberFound)
			sum +=numbers[i];
		if (!isPositiveNumberFound && numbers[i] > 0)
			isPositiveNumberFound = true;
	}
      printf("\nSum of numbers after first positive element: %.1f\n", sum);
	  int segStart, segEnd;
	  cout << "\nEnter segment\nstart value: ";
	  cin >> segStart;
	  cout << "end value: ";
	  cin >> segEnd;
	  float buffer;
	  int index = 0;
	  for (int i = 0; i < numbersSize; i++)
	  {
		  if (numbers[i] / 1 >= segStart && numbers[i] / 1 <= segEnd)
		  {
			  if (index != i)
			  {
				  buffer = numbers[i];
				  numbers[i] = numbers[index];
				  numbers[index] = buffer;
			  }
			  index++;
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
