// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Задача 1 на багатовимірні масиви

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <random>

using namespace std;

int GenerateRandomNumber(int min, int max)
{
	random_device randDevice;
	default_random_engine dre(randDevice());
	uniform_int_distribution<int> bernoulli_distribution(min, max);

	return bernoulli_distribution(dre);

}

int** FillMatrixRandNumbers(int size, int minValue, int maxValue)
{
	int** matrix = new int* [size]();


	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size]();
		for (int j = 0; j < size; j++)
		{
			int randNumber = GenerateRandomNumber(minValue, maxValue);
			matrix[i][j] = randNumber;
		}

	}
	return matrix;
}
void PrintMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			cout << fixed << setprecision(0) << setw(5) << matrix[i][j] / 1. << "\t";

		cout << endl;
	}
}

int** MatrixDiagonalReverse(int** matrix, int size)
{
	int buffer;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < i; j++)
		{
			buffer = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = buffer;
		}
	return matrix;
}

int main()
{

	const int minItemValue = -100;
	const int maxItemValue = 100;
	cout << "Input martix size: ";
	int matrixSize = 0;
	cin >> matrixSize;

	int** matrix = FillMatrixRandNumbers(matrixSize, minItemValue, maxItemValue);

	PrintMatrix(matrix, matrixSize);

	matrix = MatrixDiagonalReverse(matrix, matrixSize);

	printf("\n\n");
	PrintMatrix(matrix, matrixSize);

	system("pause>>void");
}
