//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n---------------------------------------\n"
#define INT
#define DOUBLE
#define CHAR

const int ROWS = 3; // количество строк
const int COLS = 4; // количество элементов строки

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
int Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const double arr[], const int n);
double Avg(const char arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
double minValueIn(const double arr[], const int n);
int minValueIn(const char arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
double maxValueIn(const double arr[], const int n);
int maxValueIn(const char arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftleft(int arr[], const int n, int number_of_shifts);
void shiftleft(double arr[], const int n, int number_of_shifts);
void shiftleft(char arr[], const int n, int number_of_shifts);
void shiftleft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftleft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftleft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void sort(int arr[], const int n);
void sort(double arr[], const int n);
void sort(char arr[], const int n);
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	int number_of_shifts;
	/*int minRand, maxRand;
	do
	{
		cout << "Введите мин возможное случ.число: ";	cin >> minRand;
		cout << "Введите макс возможное случ.число: ";	cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы не должны совпадать" << endl;

	} while (minRand == maxRand);*/
#ifdef INT
	const int I_SIZE = 5;
	int arr[I_SIZE];
	cout << " Массив типа INT в " << I_SIZE << " элементов" << endl;
	FillRand(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(arr, I_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, I_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(arr, I_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(arr, I_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(arr, I_SIZE, number_of_shifts);
	Print(arr, I_SIZE);
	cout << "На сколько элементов сдвинуть массив вправо:"; cin >> number_of_shifts;
	shiftRight(arr, I_SIZE, number_of_shifts);
	Print(arr, I_SIZE);
	cout << "Сортировка массива по возрастанию:" << endl;
	sort(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << endl;
	cout << endl;
	cout << delimiter << endl;
#endif //INT
#ifdef DOUBLE
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	cout << " Массив типа DOUBLE в " << D_SIZE << " элементов" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << endl;
	cout << "Сортировка массива по возрастанию:" << endl;
	sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimiter << endl;
#endif //DOUBLE
#ifdef CHAR
	const int C_SIZE = 5;
	char c_arr[C_SIZE];
	cout << " Массив типа CHAR в " << C_SIZE << " элементов" << endl;
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts);
	Print(c_arr, C_SIZE);
	cout << "Сортировка массива по возрастанию:" << endl;
	sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //CHAR
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	cout << " Двумерный INT массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (int) массива на экран:
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного int массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного int массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного int массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного int массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сортировка массива по возрастанию:" << endl;
	sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	cout << " Двумерный DOUBLE массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного double массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного double массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного double массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного double массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	Print(d_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	cout << " Двумерный CHAR массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного char массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного char массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного char массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного char массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	Print(c_arr_2, ROWS, COLS);
	cout << delimiter << endl;

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
void FillRand(double d_arr_2[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	// Заполнение двумерного double массива случайн.числами:
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
	// Заполнение двумерного массива случайн.числами CHAR:

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = 'A' + rand() % 26;
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
void Print(const double d_arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << d_arr_2[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
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

void sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int k;
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;

			}
		}
	}
	
}
void sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double k;
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;

			}
		}
	}
}
void sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				char k;
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;

			}
		}
	}
}
void sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
   for (int k = 0; k < ROWS; k++)
   {
		for (int b = 0; b < COLS; b++)
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (j + 1 == ROWS and arr[i][j] > arr[i + 1][0])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[i + 1][0];
						arr[i + 1][0] = buffer;
					}
					else if (arr[i][j] > arr[i][j + 1])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[i][j + 1];
						arr[i][j + 1] = buffer;
					}
				}
			}
		}
   }
}
/*{
	for (int i = 0; i < ROWS; i++) // cортирует только строки
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < COLS - j - 1; k++)
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					int buffer = arr[i][k];
					arr[i][k] = arr[i][k + 1];
					arr[i][k + 1] = buffer;
				}
			}
		}
	}
}
{
	for (int i = 0; i < ROWS; i++) // сортировка строк
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < COLS-1; k++)
			{
				if (arr[i][k] > arr[i][k + 1])
				{
					int buffer = arr[i][k + 1];
					arr[i][k + 1] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
	for (int i = 0; i < COLS; i++)  // сортировка столбцов
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < ROWS-1; k++)
			{
				if (arr[k][i] > arr[k + 1][i])
				{
					int buffer = arr[k + 1][i];
					arr[k + 1][i] = arr[k][i];
					arr[k][i] = buffer;
				}
			}
		}
	}
}*/