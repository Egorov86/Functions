//Arrays
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);

int Sum(const int arr[], const int n);
int Sum(const double arr[], const int n);
int Sum(const char arr[], const int n);

double Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
double Avg(const char arr[], const int n);

int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);
int minValueIn(const double arr[], const int n);
int maxValueIn(const double arr[], const int n);
int minValueIn(const char arr[], const int n);
int maxValueIn(const char arr[], const int n);

void shiftleft(int arr[], const int n);
void shiftRight(int arr[], const int n);
void shiftleft(double arr[], const int n);
void shiftRight(double arr[], const int n);
void shiftleft(char arr[], const int n);
void shiftRight(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	/*const int m = 10;
	char brr[m];*/
	/*int minRand, maxRand;
	do
	{
		cout << "Введите мин возможное случ.число: ";	cin >> minRand;
		cout << "Введите макс возможное случ.число: ";	cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы не должны совпадать" << endl;

	} while (minRand == maxRand);*/

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(arr, n) << endl;
	shiftleft(arr, n);
	cout  << endl;
	shiftRight(arr, n);
	cout << endl;
	/*FillRand(brr, m);
	Print(brr, m);*/
	
}

void FillRand(int arr[], const int n, int maxRand, int minRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}

}
void FillRand(double arr[], const int n, int maxRand, int minRand)
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
		arr[i] = minRand + rand() % (maxRand - minRand);
		arr[i] /= 100;
	}

}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}

void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		min = arr[i];

	}
	return min;
}
int minValueIn(const double arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];

	}
	return min;
}
int minValueIn(const char arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];

	}
	return min;
}

int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;
}
int maxValueIn(const double arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;
}
int maxValueIn(const char arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;
}

void shiftleft(int arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int  j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}

void shiftleft(double arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
void shiftleft(char arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}

void shiftRight(int arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0 ; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
void shiftRight(double arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
void shiftRight(char arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}