#include"FillRand.h"
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
void FillRand(double d_arr[], const int n, int maxRand, int minRand)
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
		d_arr[i] = minRand + rand() % (maxRand - minRand);
		d_arr[i] /= 100;
	}

}
//void FillRand(char c_arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		c_arr[i] = 'A' + rand() % 26;
//	}
//}