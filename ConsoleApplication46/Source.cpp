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
		cout << "������� ����� �������: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			cout << "������ ������������ �����. ������� ������ �� ���� �����, ���� " << endl
				<< "�� ���������� ����� 10. ��������� ����� ������������� ��������� �������\n\n";
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
			printf("\n����� ������������� ��������� �������: %d\n\n", sum);
		}break;

		case 2:
		{
			cout << "������ � StringGrid ������ �� 10 ����� �����. ������� ��� �����" << endl
				<< "������� � �� ������������� � ������������� ��������� ��������� �������." << endl
				<< "���������� ����� ��������� ������� �������.\n\n";
			int mas[10];
			createAndPrintArray(mas, 10, -10, 10);
			sumOfPositiveAndNegativeArrays(mas, 10);
		}break;


		case 3:
		{
			cout << "������ ������ �� 9 ������������ �����. ������� ����� ������ �� " << endl
				<< "��������� ���������, ������� �� ������ ������ 10. ��������� ������� " << endl
				<< "�������������� ��������� ������ �������\n\n";
			float mas[9];
			cout.precision(3);
			createAndPrintFloatArray(mas, 9, -11.3, 20);
			cout << "����� ������\n";
			newMasAbs10(mas, 9);
		}break;

		case 4:
		{
			cout << "������ ������������ �����. ������� ������ �� ������������� �����." << endl
				<< "����������, �������� �� ������ ������������� �� �����������.\n\n";
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
				printf("������ ������������� �� �����������\n\n");
			else
				printf("������ �� ������������� �� �����������\n\n");
		}break;

		case 5:
		{
			cout << "������ ����� �����. ������� ������ �� ���� ����� �� ������� " << endl
				<< "�������������� �����. ����������, �������� �� ������ ������������� " << endl
				<< "�� ��������.\n\n";
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
				printf("\n������ ������������� �� ��������\n\n");
			else
				printf("\n������ �� ������������� �� ��������\n\n");
		}break;

		case 6:
		{
			cout << "������ ������ �� 15 ������������ �����. ������� ����� ������ �� " << endl
				<< "��������� ���������, � ������� �� �������� ��������, ���������� � " << endl
				<< "���������� (-3,7). ���������� ������������ ������������� ��������� " << endl
				<< "������ �������\n\n";
			float mas[15];
			cout.precision(3);
			createAndPrintFloatArray(mas, 15, -4.4, 15);
			cout << "����� ������: \n";
			newMasWithout3And7(mas, 15);
		}break;

		case 7:
		{
			cout << "������ ����� �����. ������� ������ �� �����, ������� �� ������� �� 5." << endl
				<< "���������� ����������� ������� �������.\n\n";
			int n = 20;
			int *mas = NULL;
			mas = (int*)malloc(n * sizeof(int));
			createAndPrintArray(mas, 20, 1, 25);
			cout << "����� ������:\n";
			newMas5(mas, 20);
		}break;

		case 8:
		{
			cout << "������ ������������ �����. ������� ������ �� ���� �����, ���� �� " << endl
				<< "���������� ����� 33. ���������� ������������ ������� �������\n\n";
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
			printf("\n���� ������� �������: %d\n\n", max);
		}break;

		case 9:
		{
			cout << "������ ������ �� 9 ������������ �����. ������� ����� ������ �� " << endl
				<< "��������� ���������, ������� �� ������ �� ������ 12. �������� �������" << endl
				<< "����������� � ������������ �������� ������ �������\n\n";
			float mas[9];
			createAndPrintFloatArray(mas, 10, 1.4, 20);
			cout << "����� ������\n";
			newMasNotGreaterThan12(mas, 9);
		}break;

		case 10:
		{
			cout << "������ ������������ �����. ������� ������ �� �����, ������� ��������" << endl
				<< "� �������� [2,13]. ����������, ���� �� � ������� �����, ������� 10.\n\n";
			int n = 10;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			createAndPrintFloatArray(mas, 10, 1.3, 20);
			cout << "����� ������\n";
			newMasWith2And13(mas, 10);
		}break;
		}
		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}