#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	/*
	1.	Ввести два массива действительных чисел, состоящих из 9 и 7 элементов.
	Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов
	*/

	/*int a[9] = { 0 }, b[7] = { 0 }, c[16] = { 0 };
	printf("Первый массив: \n");
	for (size_t i = 0; i < 9; i++)
	{
		a[i] = 1 + rand() % 99;
		printf("%d\n", a[i]);
	}
	printf("Второй массив: \n");
	for (size_t i = 0; i < 7; i++)
	{
		b[i] = 1 + rand() % 99;
		printf("%d;;\n", b[i]);
	}
	printf("Третий массив(упорядоченный): \n");
	for (size_t i = 0; i < 16 - 1; i++)
	{
		for (size_t j = 0; j < 16 - i - 1; j++)
		{
			if (a[j] < a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("%d\n", a[i]);
	}*/

	/*
	2.В заданном целочисленном массиве R(9)
	определить индекс наибольшего из нечетных
	по значению положительных элементов
	*/

	/*int x[9] = { 0 }, m = 0;
	for (size_t i = 0; i < 9; i++)
	{
		x[i] = 1 + rand() % 99;
		printf("x[%d] = %d;\n",i, x[i]);
	}
	for (size_t i = 0; i < 9; i++)
	{
		if (m == 0)
		{
			m = x[i];
		}
		else if (x[i] > m)
			m = x[i];
	}
	if (m == 0)
	{
		printf("Массив не содержит нечетных по значению положительных элементов!\n");
	}
	else
	{
		printf("Индекс наибольшего из нечетных по значению положительных элементов: %d\n", m);
	}*/

	/*
	3.Ввести массив, состоящий из 9 элементов (девять двузначных чисел) целого типа.
	Получить новый массив, состоящий из сумм цифр элементов исходного массива
	*/

	/*int x[9] = { 0 }, sum = 0;
	for (size_t i = 0; i < 9; i++)
	{
		x[i] = 10 + rand() % 50;
		printf("%d;\n", x[i]);
		sum = sum + x[i];
	}
	printf("sum %d\n", sum);*/

	/*
	6.	Определить количество локальных максимумов в заданном числовом массиве.
	*/

	/*int x[20] = { 0 }, localmax = 0;
	for (size_t j = 0; j < 20; j++)
	{
		x[j] = 1 + rand() % 50;
		printf("X[%d] = %d;\n", j, x[j]);
		if (x[1] < x[2])
		{
			localmax++;
		}
		if (x[j] < x[j + 1])
		{
			localmax++;
		}
	}
	for (int n = 2; n < 20 - 1; n++)
	{
		if (x[n] < x[n + 1] && x[n] < x[n - 1])
		{
			localmax++;
		}
	}
	if (localmax > 0)
		printf("Количество локальных максимумов: %d\n", localmax);
	else
		printf("Локальных минимумов нет!\n");*/
	
	/*
	8.	Ввести массив, состоящий из 10 элементов (десять двузначных чисел) целого типа.
	Получить новый массив, состоящий из разностей цифр элементов исходного массива.
	*/

	/*int A[9];
	int res[9];
	int raznost;
	int i;
	for (i = 0; i<9; i++)
	{
		raznost = 0;
		printf("Enter element = ");
		scanf_s("%d", i);

		raznost -= (A[i] / 10);
		raznost -= (A[i] % 10);
		res[i] = raznost;
	}
	for (i = 0; i<9; i++)
		printf("%d\n", res[i]);*/
	

	system("pause");
}