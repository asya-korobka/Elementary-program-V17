// Task2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void Initialization(int** x, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            x[i][j] = 0;
}

void Print(int** x, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(3) << x[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int matrixSize, matrixSize1;
    cout << "Input martix size: "; cin >> matrixSize;

    int** a = new int* [matrixSize];
    for (int i = 0; i < matrixSize; i++)
        a[i] = new int[matrixSize];

    Initialization(a, matrixSize);

    for (int i = 0; i < matrixSize; i++)
    {
        matrixSize1 = matrixSize - i;
        for (int j = i; j < matrixSize; j++)
            a[i][j] = matrixSize1++;
    }

    Print(a, matrixSize);

    for (int i = 0; i < matrixSize; i++)
        delete[] a[i];
    delete[] a;
    system("pause");
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
