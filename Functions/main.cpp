//Functions
#include<iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quote(int a, int b);
int Fact(int a);
int Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quote(a, b) << endl;
    cout << "факториал числа " << a << " = " << Fact(a) << endl;
    cout << "факториал числа " << b << " = " << Fact(b) << endl;
    cout << "число " << a << " в степени " << b << " = " << Power(a, b) << endl;
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b; //Difference - разность
}
int Prod(int a, int b)
{
	return a * b; //Product - Произведение
}
double Quote(int a, int b)
{
	return (double)a / b; //Quotient - частное
}
int Fact(int n) // Factorial - факториал числа
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int Power(int a, int b) //Power - степень числа
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
        result = result;
    }
    return result;
}