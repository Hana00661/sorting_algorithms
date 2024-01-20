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
