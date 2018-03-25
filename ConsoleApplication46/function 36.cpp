#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "Header.h"
#include <conio.h>

using namespace std;

void createAndPrintMyMatrix(int(*mas)[col], int r, int start, int end)
{
	int btw = end - start;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mas[i][j] = start + rand() % btw;
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void moduleInColMas(int(*mas)[col])
{
	int newMas[col], maxModule = 0;
	cout << "сформир. одномерный массив из наибольших по модулю чисел из каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (abs(mas[i][j]) > abs(maxModule))
				maxModule = mas[i][j];
		}
		newMas[j] = maxModule;
		cout << newMas[j] << "\t";
		maxModule = 0;
	}
	cout << endl << endl;
}

void moduleInStrMas(int(*mas)[col])
{
	int newMas[col], maxModule = 0;
	cout << "сформир. одномерный массив из наибольших по модулю чисел из каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (abs(mas[i][j]) > abs(maxModule))
				maxModule = mas[i][j];
		}
		newMas[i] = maxModule;
		cout << newMas[i] << "\t";
		maxModule = 0;
	}
	cout << endl << endl;
}

void chetInStrMas(int(*mas)[col])
{
	int newMas[col] = { 0 }, count = 0;
	cout << "сформир. одномерный массив из первых четных чисел из каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] % 2 == 0 && mas[i][j] != 0)
			{
				newMas[i] = mas[i][j];
				break;
			}
		}
		cout << newMas[i] << "\t";
	}
	cout << endl << endl;
}

void chetInColMas(int(*mas)[col])
{
	int newMas[col] = { 0 }, count = 0;
	cout << "сформир. одномерный массив из первых четных чисел из каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (mas[i][j] % 2 == 0 && mas[i][j] != 0)
			{
				newMas[j] = mas[i][j];
				break;
			}
		}
		cout << newMas[j] << "\t";
	}
	cout << endl << endl;
}

void nOfnGreaterThanUrNumber(int(*mas)[col])
{
	int newMas[col], count = 0, b;
	cout << "введите любое число: ";
	cin >> b;
	cout << "сформир. одномерный массив из кол-ва чисел, которые больше заданного \nиз каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (mas[i][j] > b)
			{
				count++;
			}
		}
		newMas[j] = count;
		cout << newMas[j] << "\t";
		count = 0;
	}
	cout << endl << endl;
}

void sumOfnumbersThatAreLessThanUrNumber(int(*mas)[col])
{
	int newMas[col], sum = 0, b;
	cout << "введите любое число: ";
	cin >> b;
	cout << "сформир. одномерный массив из суммы чисел, которые меньше заданного \nиз каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] < b)
			{
				sum += mas[i][j];
			}
		}
		newMas[i] = sum;
		cout << newMas[i] << "\t";
		sum = 0;
	}
	cout << endl << endl;
}

void kratnoe3(int(*mas)[col])
{
	int newMas[20], count = 0;
	cout << "сформир. одномерный массив из чисел, кратных трем:\n";

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] % 3 == 0 && mas[i][j] != 0)
			{
				newMas[count] = mas[i][j];
				cout << newMas[i] << "\t";
				count++;
			}
		}
	}
	cout << endl << endl;
}

void positiveAndNegative(int(*mas)[col])
{
	int PosMas[20], countP = 0;
	int NegMas[20], countN = 0;

	cout << "сформир. одномерный массив из положительных чисел:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] > 0)
			{
				PosMas[countP] = mas[i][j];
				cout << PosMas[countP] << "\t";
				countP++;
			}

			else
			{
				NegMas[countN] = mas[i][j];
				countN++;
			}
		}
	}
	cout << endl << endl;

	cout << "сформир. одномерный массив из остальных чисел:\n";
	for (int i = 0; i < countN; i++)
	{
		cout << NegMas[i] << "\t";
	}
	cout << endl << endl;
}


void createAndPrintArray(int *arr, int size, int start, int end)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = start + rand() % (end - start);
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

void sumOfPositiveAndNegativeArrays(int *arr, int size)
{
	int pos[10], countP = 0, sumP = 0;
	int neg[10], countN = 0, sumN = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			pos[countP] = arr[i];
			sumP += pos[countP];
			countP++;
		}

		if (arr[i] < 0)
		{
			neg[countN] = arr[i];
			sumN += neg[countN];
			countN++;
		}
	}

	printf("сумма элементов массива с положительными числами: %d\n\n", sumP);
	printf("сумма элементов массива с отрицательными числами: %d\n\n", sumN);
}

void createAndPrintFloatArray(float *arr, int size, float start, int end)
{
	int btw = end - start;
	for (int i = 0; i < size; i++)
	{
		arr[i] = start + rand() % btw;
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
}

void newMasAbs10(float *arr, int size)
{
	float newMas[9], sum = 0, srArif;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (abs(arr[i]) > 10)
		{
			newMas[count] = arr[i];
			cout << newMas[count] << "\t";
			sum += newMas[count];
			count++;
		}
	}
	srArif = sum / count;
	cout.precision(3);
	printf("\nсреднее арифметическое данного массива: %f\n\n", srArif);
}

void newMasWithout3And7(float *arr, int size)
{
	float newMas[15], mult = 1; int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= -3 && arr[i] <= 7)
		{
			
		}
		else
		{
			newMas[count] = arr[i];
			if (newMas[count] < 0)
				mult *= newMas[count];
			cout << newMas[count] << "\t";
			count++;
		}
	}
	cout.precision(3);
	printf("\nпроизведение отрицательных элементов нового массива: %f", mult);
	cout << endl << endl;
}

void newMas5(int *arr, int size)
{
	int	newMas[15], count = 0, min = 100;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 5 == 0)
		{
			newMas[count] = arr[i];
			cout << newMas[count] << "\t";
			if (newMas[count] < min)
				min = newMas[count];
			count++;
		}
	}
	printf("\nминимальный элемент данного массива: %d\n\n", min);
}

void newMasNotGreaterThan12(float *mas, int size)
{
	float newMas[9], max = 0, min = 100;
	int indexMin, indexMax, count = 0;
	for (int i = 0; i < size; i++)
	{
		if (abs(mas[i]) < 12)
		{
			newMas[count] = mas[i];
			cout << newMas[count] << "\t";
			if (newMas[count] > max)
			{
				max = newMas[count];
				indexMax = count;
			}
			if (newMas[count] < min)
			{
				min = newMas[count];
				indexMin = count;
			}
			count++;
		}
	}
	newMas[indexMax] = min;
	newMas[indexMin] = max;

	cout << "\nпосле перестановки мин и макс\n";
	for (int i = 0; i < count; i++)
	{
		cout << newMas[i] << "\t";
	}
	cout << endl << endl;
}

void newMasWith2And13(float *arr, int size)
{
	float newMas[10]; int count = 0, count10 = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 2 && arr[i] <= 13)
		{
			newMas[count] = arr[i];
			cout << newMas[count] << "\t";
			if (newMas[count] > 10)
				count10++;
			count++;
		}
	}
	printf("\nкол-во элементов больше 10: %d\n\n", count10);
}
