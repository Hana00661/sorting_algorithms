#include "sort.h"

/**
 * insertion_sort_list - a function that sorts doubly linked list of
 *		using the Insertion sort algorithm
 * @list: the list to sort.
 * Return: void (nothing).
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;

	if (list == NULL || (*list)->next == NULL)
		return;

	temp = (*list)->next;
	while (temp)
	{
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev == NULL)
				*list = temp;
			else
			{
				temp->prev->next = temp;
			}
			print_list(*list);
		}
		temp = temp->next;
	}
}
