//ShiftRight
#include"ShiftRight.h"
#include"Shiftleft.h"
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	number_of_shifts = number_of_shifts % COLS;

	shiftleft(arr, n, n - number_of_shifts);
}
void shiftRight(double i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
}
void shiftRight(char i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftleft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftleft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftleft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}