#include"Unique.h"
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