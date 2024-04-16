//minValueIn
#include"minValueIn.h"
int minValueIn(const int i_arr[], const int n)
{
	int min = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] < min)
			min = i_arr[i];

	}
	return min;
}
double minValueIn(const double i_arr[], const int n)
{
	double min = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] < min)
			min = i_arr[i];
	}
	min = min * 100;
	min = double(min) / 100;
	return min;
}
int minValueIn(const char i_arr[], const int n)
{
	int min = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] < min)
			min = i_arr[i];

	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;

}
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
		min = min * 100;
		min = double(min) / 100;
	}
	return min;
}
int minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;

}