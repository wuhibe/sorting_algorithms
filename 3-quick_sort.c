#include "sort.h"
/**
 * partition - function to split the array to smaller pieces
 * @array: the array to sort
 * @low_index: lower index of split array
 * @high_index: higher index of split array
 * @size: size of the full array
 * Return: none
*/
int partition(int *array, int low_index, int high_index, size_t size)
{
	int i, pivot_element;

	pivot_element = array[high_index];
	i = (low_index - 1);
	for (int j = low_index; j <= high_index - 1; j++)
	{
		if (array[j] <= pivot_element)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high_index]);
	print_array(array, size);
	return (i + 1);
}
/**
 * quickSort - function to sort an array using the quick sort algorithm
 * @array: array to sort
 * @low_index: lower index of split array
 * @high_index: higher index of split array
 * @size: size of array
 * Return: none
*/
void quickSort(int *array, int low_index, int high_index, size_t size)
{
	int pivot;

	if (low_index < high_index)
	{
		pivot = partition(array, low_index, high_index, size);
		quickSort(array, low_index, pivot - 1, size);
		quickSort(array, pivot + 1, high_index, size);
	}
}

/**
 * quick_sort - function to parse the array and pass it\
 * to another sorting function
 * @array: array to be sorted
 * @size: size of array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	int low_index, high_index;

	low_index = 0;
	high_index = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_index, high_index, size);
}

/**
 * swap - function to swap two elements in an array
 * @a: first variable
 * @b: second variable
 * Return: none
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
