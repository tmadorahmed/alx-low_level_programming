#include "lists.h"
/**
 * list_len - a function that returns then number of elements in a list.
 * @h: the singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t numb_of_nodes;

	numb_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_of_nodes++;
	}
	return (numb_of_nodes);
}
