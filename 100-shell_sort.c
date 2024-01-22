#include "sort.h"
#include "functions1.c"

/**
 * shell_sort - a function that Sorts an array of integers in ascending
 *		order using the shell sort algorithm.
 * @array: array of integers.
 * @size: size of the array.
 * Return: Nothing (void).
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, k;

	if (array == NULL || size < 2)
		return;
	for (k = 1; k < (size / 3);)
		k = k * 3 + 1;
	for (; k >= 1; k /= 3)
	{
		for (i = k; i < size; i++)
		{
			j = i;
			while (j >= k && array[j - k] > array[j])
			{
				_swap(array + j, array + (j - k));
				j -= k;
			}
		}
		print_array(array, size);
	}
}
