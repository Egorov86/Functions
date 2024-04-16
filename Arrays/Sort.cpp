//Sort.cpp
#include"Sort.h"
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) // счетчик "i" выбирает элемент массива, 
		//в который будет помещено минимальное значение из всех перебираемых.
	{
		for (int j = i + 1; j < n; j++) // счётчик "j" перебирает оставшиеся элементы массива.
		{
			if (arr[i] < arr[j]) // arr[i] - выбранный элемент // arr[j] - перебираемый элемент
			{
				int buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				double buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;

			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				char buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;

			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++) //выбирает элемент массива в строке
	{
		for (int j = 0; j < COLS; j++) //выбирает элемент массива в элементе строки
		{
			for (int k = i; k < ROWS; k++) // эти два цикла перебирает оставшиеся элементы в поиске минимального значения
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					iterations++;
					//if (k == i && l == 0)l = j + 1;
					//if (l == COLS)break;
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "кол-во итерации - " << iterations << "\n";
	cout << "кол-во замен - " << exchanges << "\n";
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					iterations++;
					if (arr[i][j] > arr[k][l]) {
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "кол-во итерации - " << iterations << "\n";
	cout << "кол-во замен - " << exchanges << "\n";
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					iterations++;
					if (arr[i][j] > arr[k][l]) {
						char buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "кол-во итерации - " << iterations << "\n";
	cout << "кол-во замен - " << exchanges << "\n";
}