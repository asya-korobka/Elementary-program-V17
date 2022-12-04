//Задача 2 на багатовимірні масиви зі всіма підпунктами
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
	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size; i++)
			cout << fixed << setprecision(0) << setw(5) << matrix[i][j] / 1. << "\t";

		cout << endl;
	}
}

void PrintMatrixSumNonPairElements(int** matrix, int size)
{
	int buffer;
	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = 1; j < size; j += 2)
			sum += matrix[i][j];

		cout << fixed << setprecision(0) << setw(5) << sum / 1. << "\t";
	}
}

int SumMatrixDiagonalNegativeElements(int** matrix, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		if (matrix[i][i] < 0)
			sum += matrix[i][i];

	return sum;
}

int** InitMatrix(int** matrix, int size)
{
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			matrix[i][j] = (i == j) ? size - i : ((i < j) ? 0 : matrix[i - 1][j] - 1);

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
	printf("\n\n");

	PrintMatrixSumNonPairElements(matrix, matrixSize);

	int diagSum = SumMatrixDiagonalNegativeElements(matrix, matrixSize);
	printf("\nSum of negative elents on main diagonal: %d\n\n", diagSum);

	matrix = InitMatrix(matrix, matrixSize);
	PrintMatrix(matrix, matrixSize);
	system("pause>>void");
}

