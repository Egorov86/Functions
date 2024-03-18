//Arrays
#include <iostream>
#include <string>
#include <time.h>
using namespace std;
void Print(int arr[], int n)
{
    cout << "Вывод массива  { ";
    for (int i = 0; i < n; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout << "}";
    cout << endl;
}
void FillRand(int arr[], int n, int minRand, int maxRand)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = minRand + rand() % (maxRand - minRand);
    }
    cout << endl;
}
int sum;
void Sum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
}
void vivodSum(int arr[], int n)
{
    for (int i = 0; i < 1; i++)
    {
        cout << "Cумма массива = " << sum << " ";
    }
    cout << endl;
}
double c;
int Avg(int arr[], int n)
{
    for (int i = 0; i < 1; i++)
    {
        return c = double(sum) / n;
    }
}
void vivodAvg(int arr[], int n)
{
    for (int i = 0; i < 1; i++)
    {
        cout << "Cреднее массива = " << c << " ";
    }
    cout << endl;
}
int minValueIn(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[0])
        {
            int min = arr[0];
            arr[0] = arr[i];
            arr[i] = min;
            return min;
        }
    }
}
void vivodminValueIn(int arr[], int n)
{
    for (int i = 0; i < 1; i++)
    {
        cout << "Минимальное знач. массива = " << minValueIn(arr, n) << " ";
    }
    cout << endl;
}
int maxValueIn(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int max = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = max;
            return max;
        }
    }
}
void vivodmaxValueIn(int arr[], int n)
{
    for (int i = 0; i < 1; i++)
    {
        cout << "Максимальное знач. массива = " << maxValueIn(arr, n) << " ";
    }
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    const int n = 5;
    int arr[n];
    int minRand, maxRand;
    do
    {
        cout << " Введите минимально возможное случайное число:"; cin >> minRand;
        cout << " Введите максимально возможное случайное число:"; cin >> maxRand;
        if (minRand == maxRand) cout << "Пределы диапазона не должны совпадать" << endl;
    } while (minRand == maxRand);
    if (maxRand < minRand)
    {
        int buffer = minRand;
        minRand = maxRand;
        maxRand = buffer;
    }
    FillRand(arr, n, minRand, maxRand);
    Print(arr, n);
    Sum(arr, n);
    vivodSum(arr, n);
    Avg(arr, n);
    vivodAvg(arr, n);
    minValueIn(arr, n);
    vivodminValueIn(arr, n);
    maxValueIn(arr, n);
    vivodmaxValueIn(arr, n);
    return 0;
}