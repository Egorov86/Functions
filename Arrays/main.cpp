//Arrays
#include"stdafk.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg.h"
#include"minValueIn.h"
#include"maxValueIn.h"
#include"shiftLeft.h"
#include"shiftRight.h"
#include"Sort.h"
#include"Unique.h"
//template - создаёт шаблон
//typename - создаёт шаблонный тип данных
//T - имя шаблонного типа

#define INT
#define DOUBLE
//#define CHAR

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
	int i_arr[I_SIZE];
	cout << " Массив типа INT в " << I_SIZE << " элементов" << endl;
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(i_arr, I_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	/*shiftleft(i_arr, I_SIZE, number_of_shifts);
	Print(i_arr, I_SIZE);
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	shiftRight(i_arr, I_SIZE, number_of_shifts);
	Print(i_arr, I_SIZE);
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Массив типа INT заполненный уникальными случайными числами:" << endl;
	Unique(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);*/
	cout << endl;
	cout << delimiter << endl;
#endif //INT
#ifdef DOUBLE
	int d_arr[D_SIZE];
	cout << " Массив типа DOUBLE в " << D_SIZE << " элементов" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	/*cout<< "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
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
	Print(d_arr, D_SIZE);*/
	cout << delimiter << endl;
#endif //DOUBLE
//#ifdef CHAR
//	
//	cout << " Массив типа CHAR в " << C_SIZE << " элементов" << endl;
//	FillRand(arr, C_SIZE);
//	cout << "Сумма элементов массива: " << Sum(arr, C_SIZE) << endl;
//	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, C_SIZE) << endl;
//	cout << "Минимальное значение элементов массива: " << minValueIn(arr, C_SIZE) << endl;
//	cout << "Максимальное значение элементов массива: " << maxValueIn(arr, C_SIZE) << endl;
//	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
//	shiftleft(arr, C_SIZE, number_of_shifts);
//	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
//	shiftRight(arr, C_SIZE, number_of_shifts);
//	cout << "Сортировка массива по убыванию:" << endl;
//	Sort(arr, C_SIZE);
//	cout << "Массив типа CHAR заполненный уникальными случайными числами:" << endl;
//	Unique(arr, C_SIZE);
//	cout << endl;
//	cout << delimiter << endl;
//#endif 

}