//i_arrays
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n---------------------------------------\n"
#define INT
#define DOUBLE
#define CHAR

const int ROWS = 3; // количество строк
const int COLS = 4; // количество элементов строки

void FillRand(int i_arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double i_arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char i_arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int i_arr[], const int n);
void Print(const double i_arr[], const int n);
void Print(const char i_arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int i_arr[], const int n);
double Sum(const double i_arr[], const int n);
int Sum(const char i_arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int i_arr[], const int n);
double Avg(const double i_arr[], const int n);
double Avg(const char i_arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int i_arr[], const int n);
double minValueIn(const double i_arr[], const int n);
int minValueIn(const char i_arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int i_arr[], const int n);
double maxValueIn(const double i_arr[], const int n);
int maxValueIn(const char i_arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftleft(int i_arr[], const int n);
void shiftleft(double i_arr[], const int n);
void shiftleft(char i_arr[], const int n);
void shiftleft(int arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftRight(int i_arr[], const int n);
void shiftRight(double i_arr[], const int n);
void shiftRight(char i_arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	const int D_SIZE = 6;
	double d_arr[D_SIZE];
	const int C_SIZE = 6;
	char c_arr[C_SIZE];
	/*int minRand, maxRand;
	do
	{
		cout << "Введите мин возможное случ.число: ";	cin >> minRand;
		cout << "Введите макс возможное случ.число: ";	cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы не должны совпадать" << endl;

	} while (minRand == maxRand);*/
#ifdef INT
	cout << " Массив типа INT в " << I_SIZE << " элементов" << endl;
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(i_arr, I_SIZE) << endl;
	shiftleft(i_arr, I_SIZE);
	cout  << endl;
	shiftRight(i_arr, I_SIZE);
	cout << endl;
	cout << endl;
	cout << delimiter << endl;
#endif //INT
#ifdef DOUBLE
	cout <<" Массив типа DOUBLE в " << D_SIZE << " элементов" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	shiftleft(d_arr, D_SIZE);
	cout << endl;
	shiftRight(d_arr, D_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //DOUBLE
#ifdef CHAR
	cout << " Массив типа CHAR в " << C_SIZE << " элементов" << endl;
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(c_arr, C_SIZE) << endl;
	shiftleft(c_arr, C_SIZE);
	cout << endl;
	shiftRight(c_arr, C_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //CHAR
	int i_arr_2[ROWS][COLS];
	int d_arr_2[ROWS][COLS];
	cout << " Двумерный массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (int) массива на экран:
	FillRand(i_arr_2, ROWS,COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	//shiftleft(i_arr_2, ROWS, COLS);
	
	cout << delimiter << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

}

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
	// Заполнение двумерного массива случайн.числами:

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// Заполнение двумерного массива случайн.числами:
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
			arr[i][j] = minRand + rand() % (maxRand - minRand);
			//arr[i][j] /= 100;
		}
	}
}

void Print(const int i_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
	cout << endl;
}
void Print(const double i_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
	cout << endl;
}
void Print(const char i_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

}
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

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

void shiftleft(int i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[0];
		for (int  j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;
		
	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}

void shiftleft(double i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = i_arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;

	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}
void shiftleft(char i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;

	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}
// Не доделал смещение массива влево.
void shiftleft(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	number_of_shifts = number_of_shifts % COLS;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer_1 = arr[i][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS - number_of_shifts; j++)
			{
				arr[i][j] = arr[i][j+1];
			}
			arr[i][COLS] = buffer_1;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}

}

void shiftRight(int i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0 ; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}
void shiftRight(double i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}
void shiftRight(char i_arr[], const int n)
{
	int number_of_shifts;
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
}