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

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			cout << "Ввести вещественные числа. Создать массив из этих чисел, пока " << endl
				<< "не встретится число 10. Вычислить сумму отрицательных элементов массива\n\n";
			int n = 100;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int sum = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = -9 + rand() % 25;
				cout << mas[i] << "\t";
				if (mas[i] == 10)
					break;
				if (mas[i])
					if (mas[i] < 0)
						sum += mas[i];
			}
			printf("\nсумма отрицательных элементов массива: %d\n\n", sum);
		}break;

		case 2:
		{
			cout << "Ввести в StringGrid массив из 10 целых чисел. Создать два новых" << endl
				<< "массива – из положительных и отрицательных элементов исходного массива." << endl
				<< "Определить суммы элементов каждого массива.\n\n";
			int mas[10];
			createAndPrintArray(mas, 10, -10, 10);
			sumOfPositiveAndNegativeArrays(mas, 10);
		}break;


		case 3:
		{
			cout << "Ввести массив из 9 вещественных чисел. Создать новый массив из " << endl
				<< "элементов исходного, которые по модулю больше 10. Вычислить среднее " << endl
				<< "арифметическое элементов нового массива\n\n";
			float mas[9];
			cout.precision(3);
			createAndPrintFloatArray(mas, 9, -11.3, 20);
			cout << "новый массив\n";
			newMasAbs10(mas, 9);
		}break;

		case 4:
		{
			cout << "Ввести вещественные числа. Создать массив из положительных чисел." << endl
				<< "Определить, является ли массив упорядоченным по возрастанию.\n\n";
			int n = 10;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			cout.precision(3);
			createAndPrintFloatArray(mas, 10, 1.2, 20);

			int count = 0;
			for (int i = 0; i < 10; i++)
			{
				if (i > 0)
				{

					if (mas[i] > mas[i - 1])
						count++;
				}
			}
			if (count > 9)
				printf("массив упорядоченный по возрастанию\n\n");
			else
				printf("массив НЕ упорядоченный по возрастанию\n\n");
		}break;

		case 5:
		{
			cout << "Ввести целые числа. Создать массив из этих чисел до первого " << endl
				<< "отрицательного числа. Определить, является ли массив упорядоченным " << endl
				<< "по убыванию.\n\n";
			int mas[50], count = 0, i;
			for (i = 0; i < 50; i++)
			{
				mas[i] = -5 + rand() % 40;
				cout << mas[i] << "\t";
				if (i > 0)
				{
					if (mas[i] < mas[i - 1])
						count++;
				}
				if (mas[i] < 0)
					break;
			}
			if (count >= i)
				printf("\nмассив упорядоченный по убыванию\n\n");
			else
				printf("\nмассив НЕ упорядоченный по убыванию\n\n");
		}break;

		case 6:
		{
			cout << "Ввести массив из 15 вещественных чисел. Создать новый массив из " << endl
				<< "элементов исходного, в который не включать элементы, попадающие в " << endl
				<< "промежуток (-3,7). Определить произведение отрицательных элементов " << endl
				<< "нового массива\n\n";
			float mas[15];
			cout.precision(3);
			createAndPrintFloatArray(mas, 15, -4.4, 15);
			cout << "новый массив: \n";
			newMasWithout3And7(mas, 15);
		}break;

		case 7:
		{
			cout << "Ввести целые числа. Создать массив из чисел, которые не делятся на 5." << endl
				<< "Определить минимальный элемент массива.\n\n";
			int n = 20;
			int *mas = NULL;
			mas = (int*)malloc(n * sizeof(int));
			createAndPrintArray(mas, 20, 1, 25);
			cout << "новый массив:\n";
			newMas5(mas, 20);
		}break;

		case 8:
		{
			cout << "Ввести вещественные числа. Создать массив из этих чисел, пока не " << endl
				<< "встретится число 33. Определить максимальный элемент массива\n\n";
			int max = 0, n = 100;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			for (int i = 0; i < 100; i++)
			{
				mas[i] = 1.0 + rand() % 40;
				cout << mas[i] << "\t";
				if (mas[i] > max)
					max = mas[i];

				if (mas[i] == 33)
					break;
			}
			printf("\nмакс элемент массива: %d\n\n", max);
		}break;

		case 9:
		{
			cout << "Ввести массив из 9 вещественных чисел. Создать новый массив из " << endl
				<< "элементов исходного, которые по модулю не больше 12. Поменять местами" << endl
				<< "минимальный и максимальный элементы нового массива\n\n";
			float mas[9];
			createAndPrintFloatArray(mas, 10, 1.4, 20);
			cout << "новый массив\n";
			newMasNotGreaterThan12(mas, 9);
		}break;

		case 10:
		{
			cout << "Ввести вещественные числа. Создать массив из чисел, которые попадают" << endl
				<< "в интервал [2,13]. Определить, есть ли в массиве числа, большие 10.\n\n";
			int n = 10;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			createAndPrintFloatArray(mas, 10, 1.3, 20);
			cout << "новый массив\n";
			newMasWith2And13(mas, 10);
		}break;
		}
		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}