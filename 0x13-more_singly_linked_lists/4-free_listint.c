#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
