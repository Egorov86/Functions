#include"Sort.h"
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