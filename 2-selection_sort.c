#include "sort.h"
/**
 * selection_sort - function that sorts through an array using selection sort
 * @array: the array to be sorted
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	int i, j, smallest;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[smallest])
				smallest = j;
		swap(&array[smallest], &array[i]);
		print_array(array, size);
	}
}
/**
 * swap - function to swap two elements in an array
 * @a: first variable
 * @b: second variable
 * Return: none
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
