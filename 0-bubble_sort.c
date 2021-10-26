#include "sort.h"

/**
 * bubble_sort - function that uses bubble sort to sort an array
 * @array: array of numbers to sort
 * @size: size of array
 * Return: none
*/
void bubble_sort(int *array, size_t size)
{
	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
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
