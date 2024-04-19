#include"Sort.h"
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++) // ������� "i" �������� ������� �������, 
		//� ������� ����� �������� ����������� �������� �� ���� ������������.
	{
		for (int j = i + 1; j < n; j++) // ������� "j" ���������� ���������� �������� �������.
		{
			if (arr[i] < arr[j]) // arr[i] - ��������� ������� // arr[j] - ������������ �������
			{
				T buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}