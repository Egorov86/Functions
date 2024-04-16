//Shiftlef.cpp
#include"Shiftleft.h"
void shiftleft(int arr[], const int n, int number_of_shifts)
{

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;

	}
}

void shiftleft(double i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = i_arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;

	}
}
void shiftleft(char i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;

	}
}
// Не доделал смещение массива влево.
void shiftleft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	//number_of_shifts = number_of_shifts % COLS;

	/*for (int i = 0; i < ROWS; i++)
	{
		shiftleft(arr[i], COLS, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];

			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftleft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];

			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftleft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];

			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}