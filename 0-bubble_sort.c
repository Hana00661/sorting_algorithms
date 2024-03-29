#include "sort.h"
#include "functions1.c"

/**
 * bubble_sort - a function that sorts an array of integers in
 *		ascending order using the Bubble sort algorithm
 * @array: the array to sort.
 * @size: size of the array.
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				_swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
