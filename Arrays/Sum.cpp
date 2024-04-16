//Sum.cpp
#include"Sum.h"
int Sum(const int i_arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i_arr[i];
	}
	return sum;
}
double Sum(const double i_arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i_arr[i];
	}
	sum = sum * 100;
	sum = double(sum) / 100;
	return sum;

}
int Sum(const char i_arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i_arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;

}
double Sum(const double d_arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0.0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += d_arr_2[i][j];
		}
		sum *= 100;
		sum = (double)sum * 0.01;
	}
	return sum;

}
int Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;

}