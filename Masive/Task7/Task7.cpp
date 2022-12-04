// Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Задача 7 на одновимірні масиви
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <random>
#include <iomanip>

using namespace std;
#define MIN_ARRAY_ITEM_VALUE (-150)
#define MAX_ARRAY_ITEM_VALUE (100)
#define ARRAY_SIZE (100)

void PrintArray(int* numbers)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
		cout << fixed << setprecision(0) << setw(5) << numbers[i] / 1. << "\t";
	cout << "\n";
}
int GenerateRandomNumber()
{
	random_device randDevice;
	default_random_engine dre(randDevice());
	uniform_int_distribution<int> bernoulli_distribution(MIN_ARRAY_ITEM_VALUE, MAX_ARRAY_ITEM_VALUE);
	return bernoulli_distribution(dre);
}

int* InitArray(int* array)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
		array[i] = GenerateRandomNumber();
	return array;
}



void main()
{
	setlocale(0, ".1251");
	int* numbers;

	numbers = new int[ARRAY_SIZE];
	InitArray(numbers);
	
	PrintArray(numbers);
	
	int minSumSequence = 0, currentSumSequence = 0;
	bool isPresentMinSum = false;
	int positiveSequenceItemsCount = 0;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > 0)
		{
			currentSumSequence += numbers[i];
			positiveSequenceItemsCount++;
		}
		else if (currentSumSequence > 0)
		{
			if (!isPresentMinSum && positiveSequenceItemsCount>1)
			{
				minSumSequence = currentSumSequence;
				isPresentMinSum = true;
			}
			else if (currentSumSequence < minSumSequence && positiveSequenceItemsCount>1)
			{
				minSumSequence = currentSumSequence;
			}
			currentSumSequence = 0;
			positiveSequenceItemsCount = 0;
		}
	}
	printf("Min sum: %d", minSumSequence);

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
