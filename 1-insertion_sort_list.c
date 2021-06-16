#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *  in ascending order using the Insertion sort algorithm
 *
 * @list: head of list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *n1;

	if (list == NULL || *list == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		n1 = node->next;
		while (node->prev && node->prev->n > node->n)
		{
			node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;
			node->next = node->prev;
			node->prev = node->next->prev;
			node->next->prev = node;
			if (node->prev)
				node->prev->next = node;
			else
				*list = node;
			print_list(*list);
		}
		node = n1;
	}
}
