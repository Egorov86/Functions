//maxValueIn
#include"maxValueIn.h"
int maxValueIn(const int i_arr[], const int n)
{
	int max = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] > max)
			max = i_arr[i];

	}
	return max;
}
double maxValueIn(const double i_arr[], const int n)
{
	double max = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] > max)
			max = i_arr[i];

	}
	max = max * 100;
	max = double(max) / 100;
	return max;
}
int maxValueIn(const char i_arr[], const int n)
{
	int max = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] > max)
			max = i_arr[i];

	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
		max = max * 100;
		max = double(max) / 100;
	}
	return max;
}
int maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}