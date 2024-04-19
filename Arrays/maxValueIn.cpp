#include"maxValueIn.h"
template<typename T>
T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];

	}
	return max;
}