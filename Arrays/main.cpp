//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

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
//template - создаёт шаблон
//typename - создаёт шаблонный тип данных
//T - имя шаблонного типа
template<typename T>
void Print(const T arr[], const int n);

template<typename T>
T Sum(const T arr[], const int n);

//template<typename T>
double Avg(const int arr[], const int n);

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

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Unique(int arr[], const int n);
void Unique(double arr[], const int n);
void Unique(char arr[], const int n);
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Unique(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Unique(char arr[ROWS][COLS], const int ROWS, const int COLS);

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
	const int I_SIZE = 10;
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
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << "Массив типа INT заполненный уникальными случайными числами:" << endl;
	Unique(arr, I_SIZE);
	Print(arr, I_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //INT
#ifdef DOUBLE
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	cout << " Массив типа DOUBLE в " << D_SIZE << " элементов" << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout<< "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
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
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Массив типа DOUBLE заполненный уникальными случайными числами:" << endl;
	Unique(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimiter << endl;
#endif //DOUBLE
#ifdef CHAR
	const int C_SIZE = 5;
	char c_arr[C_SIZE];
	cout << " Массив типа CHAR в " << C_SIZE << " элементов" << endl;
	FillRand(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;
	cout << "Минимальное значение элементов массива: " << minValueIn(c_arr, C_SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << maxValueIn(c_arr, C_SIZE) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr, C_SIZE, number_of_shifts);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr, C_SIZE, number_of_shifts);
	cout << "Сортировка массива по убыванию:" << endl;
	Sort(c_arr, C_SIZE);
	cout << "Массив типа CHAR заполненный уникальными случайными числами:" << endl;
	Unique(c_arr, C_SIZE);
	cout << endl;
	cout << delimiter << endl;
#endif //CHAR
	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	cout << " Двумерный INT массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (int) массива на экран:
	FillRand(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного int массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного int массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного int массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного int массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Сортировка массива по возрастанию:" << endl;
	Sort(i_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа INT заполненный уникальными случайными числами::" << endl;
	Unique(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	cout << " Двумерный DOUBLE массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного double массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного double массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного double массива: " << minValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного double массива: " << maxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(d_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Сортировка массива по возрастанию:" << endl;
	Sort(d_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа DOUBLE заполненный уникальными случайными числами::" << endl;
	Unique(d_arr_2, ROWS, COLS);
	cout << delimiter << endl;

	cout << " Двумерный CHAR массив " << ROWS << " на " << COLS << " элементов" << endl;
	// Вывод двумерного (doble) массива на экран :
	FillRand(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного char массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов двумерного char массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов двумерного char массива: " << minValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов двумерного char массива: " << maxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "На сколько элементов сдвинуть влево массив:"; cin >> number_of_shifts;
	shiftleft(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "На сколько элементов сдвинуть вправо массив:"; cin >> number_of_shifts;
	shiftRight(c_arr_2, ROWS, COLS, number_of_shifts);
	cout << "Сортировка массива по возрастанию :" << endl;
	Sort(c_arr_2, ROWS, COLS);
	cout << "Двумерный массив типа CHAR заполненный уникальными случайными числами:" << endl;
	Unique(c_arr_2, ROWS, COLS);
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
template<typename T>
void Print(const T i_arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i_arr[i] << tab;
	}
	cout << endl;
}
template<typename T>
T Sum(const T i_arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += i_arr[i];
	}
	return sum;
}
//template<typename T>
double Avg(const int i_arr[], const int n)
{
	return (double)Sum(i_arr, n) / n;
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
void Unique(int arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
		iterations++;
	}
	cout << "кол-во итерации - " << iterations << "\n";
}
void Unique(double arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % (n * 100);
			arr[i] /= 100;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
		iterations++;
	}
	cout << "кол-во итерации - " << iterations << "\n";
}
void Unique(char arr[], const int n)
{
	int iterations = 0;
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = 'A' + rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
		iterations++;
	}
	cout << "кол-во итерации - " << iterations << "\n";
}
void Unique(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void Unique(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % ((ROWS * COLS) * 100);
				arr[i][j] /= 100;
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}

			} while (!unique);
		}
	}
}
void Unique(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = 'A' + rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}