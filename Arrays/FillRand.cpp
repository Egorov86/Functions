//FillRand.cpp
#include"FillRand.h"
void FillRand(int i_arr[], const int n, int maxRand, int minRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		i_arr[i] = minRand + rand() % (maxRand - minRand);
	}

}
void FillRand(double i_arr[], const int n, int maxRand, int minRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		i_arr[i] = minRand + rand() % (maxRand - minRand);
		i_arr[i] /= 100;
	}

}
void FillRand(char i_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		i_arr[i] = 'A' + rand() % 26;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// «аполнение двумерного массива случайн.числами:

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double d_arr_2[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// «аполнение двумерного double массива случайн.числами:
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			d_arr_2[i][j] = minRand + rand() % (maxRand - minRand);
			d_arr_2[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// «аполнение двумерного массива случайн.числами CHAR:

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = 'A' + rand() % 26;
		}
	}
}