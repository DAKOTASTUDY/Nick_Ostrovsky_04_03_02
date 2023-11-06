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
	int data[] = { 5, 10, 6, 1, 0, 2, 9, 8, 5, 4, 3 };
	int n = sizeof(data) / sizeof(data[0]);
	publication(data, n);
	quicksort(data, 0, n - 1);
	publication(data, n);

}