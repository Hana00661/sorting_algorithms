#include "sort.h"

/**
 * selection_sort - a function that sorts an array of
 *		integers using the Selection sort algorithm.
 * @size: size of an array.
 * @array: array to sort.
 * Return: Nothing (void).
 */

void selection_sort(int *array, size_t size)
{

	size_t i, j, m;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
				m = j;
		}
		if (i != m)
		{
			temp = array[i];
			array[i] = array[m];
			array[m] = temp;
			print_array(array, size);
		}
	}

}
