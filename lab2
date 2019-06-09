/*Треугольник. Разработать программу, меню которой позволяет
выполнить следующие функции:
• Ввод координат вершин треугольника.
• Определить вид треугольника (правильный, прямоугольный,
равнобедренный, произвольного вида).
• Вывод периметра треугольника
• Вывод площади треугольника.
• Вычислить и вывести радиусы вписанной и описанной вокруг
треугольника окружностей.
• Информация о версии и авторе программы.
• Выход из программы.*/

#include "pch.h"
#include <stdio.h>
#include <math.h> 
#include <locale.h>
#include <stdlib.h>

double CheckEnter(float n);
void TriangleType(double firstSide, double secondSide, double thirdSide);
double Perimetr(double firstSide, double secondSide, double thirdSide);
double Square(double firstSide, double secondSide, double thirdSide, double perimetr);
double Square(double firstSide, double secondSide, double thirdSide, double perimetr);
double InscribedCircle(double firstSide, double secondSide, double thirdSide, double square);
double CircumscribedСircle(double firstSide, double secondSide, double thirdSide, double square);
void Info();


int main()
{
	setlocale(LC_ALL, "Rus");
	int firstChoice = 0, secondChoice = 0;
	double  x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, firstSide = 0, secondSide = 0, thirdSide = 0, perimetr = 0, square = 0;
	do
	{
		printf("Введите координаты первой точки: \n");
		printf("Введите x1: \n");
		x1 = CheckEnter(x1);
		printf("Введите y1: \n");
		y1 = CheckEnter(y1);
		printf("Введите координаты второй точки: \n");
		printf("Введите x2: \n");
		x2 = CheckEnter(x2);
		printf("Введите y2: \n");
		y2 = CheckEnter(y2);
		printf("Введите координаты третей точки: \n");
		printf("Введите x3: \n");
		x3 = CheckEnter(x3);
		printf("Введите y3: \n");
		y3 = CheckEnter(y3);
		firstSide = sqrt(fabs(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
		secondSide = sqrt(fabs(pow((x3 - x2), 2) + pow((y3 - y2), 2)));
		thirdSide = sqrt(fabs(pow((x3 - x1), 2) + pow((y3 - y1), 2)));
		printf("Первая сторона = %f\n", firstSide);
		printf("Вторая сторона = %f\n", secondSide);
		printf("Третья сторона = %f\n", thirdSide);
		do
		{
			printf("Для определения вида треугольника введите 1;\n");
			printf("Для определения периметра треугольника введите 2;\n");
			printf("Для вывода радиуса вписанной окружности введите 3;\n");
			printf("Для вывода радиуса описанной окружности введите 4;\n");
			printf("для завершения работы нажмите 6;");

			firstChoice = CheckEnter(firstChoice);
			system("cls");
			if (firstChoice == 1)
			{
				TriangleType(firstSide, secondSide, thirdSide);
			}
			if (firstChoice == 2)
			{
				perimetr = Perimetr(firstSide, secondSide, thirdSide);
				printf("Периметр = %f\n", perimetr);
			}
			if (firstChoice == 3)
			{
				square = Square(firstSide, secondSide, thirdSide, perimetr);
				printf("Площадь = %f\n", square);
			}
			if (firstChoice == 4)
			{
				printf("Радиус вписанной окружности = %f\n", InscribedCircle(firstSide, secondSide, thirdSide, square));
			}
			if (firstChoice == 5)
			{
				printf("Радиус вписанной окружности = %f\n", CircumscribedСircle(firstSide, secondSide, thirdSide, square));
			}
		} while (firstChoice != 6);
		printf("Для того, чтобы поработать с новыми координатами введите любое число, кроме 1:\n");
		secondChoice = CheckEnter(secondChoice);
	} while (secondChoice != 1);
	Info();
	return 0;
}

double CheckEnter(float n)
{
	while (!scanf_s("%f", &n))
	{
		printf("Пожалуйста, введите число: \n");
		rewind(stdin);
	}
	return n;
}

void TriangleType(double firstSide, double secondSide, double thirdSide)
{
	if (firstSide == secondSide || firstSide == thirdSide || secondSide == thirdSide)
	{
		printf("Треугольник является равнобедренным\n");
	}
	if (firstSide == secondSide && secondSide == thirdSide)
	{
		printf("Треугольник является правильным\n");
	}
	if (pow(firstSide, 2) + pow(secondSide, 2) == pow(thirdSide, 2) || pow(firstSide, 2) + pow(thirdSide, 2) == pow(secondSide, 2) || pow(thirdSide, 2) + pow(secondSide, 2) == pow(firstSide, 2))
	{
		printf("Треугольник является прямоугольным\n");
	}
	else
	{
		printf("Треугольник является произвольным\n");
	}
}


double Perimetr(double firstSide, double secondSide, double thirdSide)
{
	return firstSide + secondSide + thirdSide;
}

double Square(double firstSide, double secondSide, double thirdSide, double perimetr)
{
	return sqrt(perimetr/2 * (perimetr / 2 - firstSide) * (perimetr / 2 - secondSide) * (perimetr / 2 - thirdSide));
}

double InscribedCircle(double firstSide, double secondSide, double thirdSide, double square)
{
	return (2 * square) / (firstSide + secondSide + thirdSide);
}

double CircumscribedСircle(double firstSide, double secondSide, double thirdSide, double square)
{
	return (firstSide * secondSide * thirdSide) / (4 * square);
}

void Info()
{
	printf("Автор: Шпак А. В. Версия: 1.0");
}
