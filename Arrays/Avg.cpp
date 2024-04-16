//Avg.cpp
#include"Avg.h"
#include"Sum.h"
double Avg(const int i_arr[], const int n)
{
	return (double)Sum(i_arr, n) / n;
}
double Avg(const double i_arr[], const int n)
{
	return (double)Sum(i_arr, n) / n;
}
double Avg(const char i_arr[], const int n)
{
	return (double)Sum(i_arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}