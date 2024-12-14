#include "sort.h"
/**
 * insertion_sort_list -using the Bubble sort algorithm.
 *
 * @list: the list you want to sort.
 *
 *
 */
	void insertion_sort_list(listint_t **list)
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temp = current->prev;
			temp->next = current->next;
			if (current->next != NULL)
				current->next->prev = temp;

			current->prev = temp->prev;

			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;

			current->next = temp;
			temp->prev = current;
		}
		current = current->next;
	}
}

