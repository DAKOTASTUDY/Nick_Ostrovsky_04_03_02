// Nick_Ostrovsky_04_03_02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void swap(int* first, int* second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

void publication(int array[], int size)
{ 
	std::cout << "\n\t";
	for (int i = 0; i < size; i++)
		{
				std::cout << array[i] << " ";
			}
	
	std::cout << std::endl;
}
int partition(int array[], int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	for (int j = low; j < high; j++) 
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
	}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
void quicksort(int array[], int low, int high)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high);
		quicksort(array, low, pivot_index - 1);
		quicksort(array, pivot_index + 1, high);

	}

}
int main()
{
	int data1[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33};
	int n = sizeof(data1) / sizeof(data1[0]);
	publication(data1, n);
	quicksort(data1, 0, n - 1);
	publication(data1, n);

	int data2[] = { 88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74 };
	 n = sizeof(data2) / sizeof(data2[0]);
	publication(data2, n);
	quicksort(data2, 0, n - 1);
	publication(data2, n);

	int data3[] = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
	 n = sizeof(data3) / sizeof(data3[0]);
	publication(data3, n);
	quicksort(data3, 0, n - 1);
	publication(data3, n);
	return 0;
}