//Arrays
#include"Constants.h"
#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg.h"
#include"minValueIn.h"
#include"maxValueIn.h"
#include"Shiftleft.h"
#include"ShiftRight.h"
#include"Sort.h"
#include"Unique.h"

#define INT
#define DOUBLE
#define CHAR

void main()
{
	setlocale(LC_ALL, "");
	int number_of_shifts;
	/*int minRand, maxRand;
	do
	{
		cout << "Введите мин возможное случ.число: ";	cin >> minRand;
		cout << "Введите макс возможное случ.число: ";	cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы не должны совпадать" << endl;

	} while (minRand == maxRand);*/
#ifdef INT
	const int I_SIZE = 10;
	int arr[I_SIZE];
	cout << " Массив типа INT в " << I_SIZE << " элементов" << endl;
	FillRand(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, I_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(arr, I_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(arr, I_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(arr, I_SIZE, number_of_shifts);
	Print(arr, I_SIZE);
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	shiftRight(arr, I_SIZE, number_of_shifts);
	Print(arr, I_SIZE);
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "Массив типа INT заполненный уникальными случайными числами:" << endl;
	Unique(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //INT
#ifdef DOUBLE
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	cout << " Массив типа DOUBLE в " << D_SIZE << " элементов" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << endl;
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Массив типа DOUBLE заполненный уникальными случайными числами:" << endl;
	Unique(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimiter << endl;
#endif //DOUBLE
#ifdef CHAR
	const int C_SIZE = 5;
	char c_arr[C_SIZE];
	cout << " Массив типа CHAR в " << C_SIZE << " элементов" << endl;
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Массив типа CHAR заполненный уникальными случайными числами:" << endl;
	Unique(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //CHAR
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	cout << " Двумерный INT массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (int) массива на экран:
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного int массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного int массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного int массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного int массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сортировка массива по возрастанию:" << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа INT заполненный уникальными случайными числами::" << endl;
	Unique(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	cout << " Двумерный DOUBLE массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного double массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного double массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного double массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного double массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сортировка массива по возрастанию:" << endl;
	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа DOUBLE заполненный уникальными случайными числами::" << endl;
	Unique(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	cout << " Двумерный CHAR массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного char массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного char массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного char массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного char массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сортировка массива по возрастанию :" << endl;
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа CHAR заполненный уникальными случайными числами::" << endl;
	Unique(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << delimiter << endl;
}