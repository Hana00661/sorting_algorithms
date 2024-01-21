#include "sort.h"

/**
 * _swap - a function that swap between two intgers.
 * @i: the fisrt number to swap.
 * @j: the second number to swap.
 * Return: void.
 */

void _swap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
 * _part - a function that find the partition scheme position.
 * @array: array to sort.
 * @low: first index of the array.
 * @high: last index of the array.
 * @size: size of the array.
 * Return: first index + 1 (i + 1).
 */

int _part(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1), j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			_swap(&array[i], &array[j]);

			if (j != i)
				print_array(array, size);
		}
	}
	_swap(&array[i + 1], &array[high]);
	if (high != (i + 1))
		print_array(array, size);
	return (i + 1);
}

/**
 * _sort - a function that sorted the divided array.
 * @array: array to sort.
 * @low: first index of the array.
 * @high: last index of the array.
 * @size: size of the array.
 * Return: Nothing (void).
 */

void _sort(int array[], int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = _part(array, low, high, size);
		_sort(array, low, pivot - 1, size);
		_sort(array, pivot + 1, high, size);
	}
}
