//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"
#define delimiter "\n---------------------------------------\n"

const int I_SIZE = 10;
int arr[I_SIZE];
const int D_SIZE = 5;
double d_arr[D_SIZE];
const int C_SIZE = 5;
char c_arr[C_SIZE];

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);

//template - создаёт шаблон
//typename - создаёт шаблонный тип данных
//T - имя шаблонного типа
template<typename T>
void Print(const T arr[], const int n);

template<typename T>
T Sum(const T arr[], const int n);
template<typename T>
double Avg(const T arr[], const int n);

template<typename T>
T minValueIn(const T arr[], const int n);

template<typename T>
T maxValueIn(const T arr[], const int n);

template<typename T>
void shiftleft(T arr[], const int n, int number_of_shifts);

template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
void Unique(T arr[], const int n);

#define INT
#define DOUBLE
#define CHAR

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
#endif

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

template<typename T>
double Avg(const T i_arr[], const int n)
{
	return (double)Sum(i_arr, n) / n;
}

template<typename T>
T minValueIn(const T i_arr[], const int n)
{
	T min = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] < min)
			min = i_arr[i];

	}
	return min;
}
template<typename T>
T maxValueIn(const T i_arr[], const int n)
{
	T max = i_arr[0];
	for (int i = 1; i < n; i++)
	{
		if (i_arr[i] > max)
			max = i_arr[i];

	}
	return max;
}
template<typename T>
void shiftleft(T i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = i_arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			i_arr[j] = i_arr[j + 1];
		}
		i_arr[n - 1] = buffer;

	}
}

template<typename T>
void shiftRight(T i_arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = i_arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			i_arr[i] = i_arr[i - 1];
		}
		i_arr[0] = buffer;
	}
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++) // счетчик "i" выбирает элемент массива, 
		//в который будет помещено минимальное значение из всех перебираемых.
	{
		for (int j = i + 1; j < n; j++) // счётчик "j" перебирает оставшиеся элементы массива.
		{
			if (arr[i] < arr[j]) // arr[i] - выбранный элемент // arr[j] - перебираемый элемент
			{
				T buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}

template<typename T>
void Unique(T arr[], const int n)
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
