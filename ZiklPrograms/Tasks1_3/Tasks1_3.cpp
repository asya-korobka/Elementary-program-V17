// Tasks1_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Завдання 3 на циклічні оператори 
#include <iostream>
#include <stdio.h>

using namespace std;

void SegmentSquare()
{
	int a, b;

	cout << "Enter the a and b : ";
	cin >> a >> b;
	int sum = 0;
	for (int i = a; i <= b; i++)
	{
		if (i % 4 == 0)
		{
			for (int j = i; j <= b; j += 4)

				sum += j;

			break;
		}
	}

	printf("Sum = %d", sum);
}

int ReverseNumber(int number)
{
	int reversedNumber = 0;
	while (number)
	{
		reversedNumber = 10 * reversedNumber + number % 10;
		number /= 10;
	}
	return reversedNumber;
}
	

void CheckPolindrom()
{
	int number;
	cout << "Enter number for palindrome checking: ";
	cin >> number;
	for (int i = 1; i <= 9; i++)
	{
		int currentNumber = number * 10 + i*(number /abs(number));
		if (ReverseNumber(currentNumber) == currentNumber)
		{
			printf("palindrome is %d", currentNumber);
			return;
		}

	}
	printf("palindrome not found!!!\n");
}

void BacteriumReproduction()
{
	int minutes;
	cout << "Enter in minutes for which time you need to divide bacteria: ";
	cin >> minutes;
	printf("%0.0f", pow(2, minutes));
}
int main()
{
	setlocale(0, ".1251");
	cout << "Tasks\n1. Sum of segment\n2. Palindrome check\n3. Bacterium reproduction\n\nEnter task number (1-3): ";
	int taskNumer = 0;
	cin >> taskNumer;
	switch (taskNumer)
	{
	case 1:SegmentSquare();
		break;
	case 2:CheckPolindrom();
		break;
	case 3:BacteriumReproduction();
		break;
	default:cout << "Wrong task number!!!" << endl;
		break;

	}
	system("pause>>void");
	return 0;

}
