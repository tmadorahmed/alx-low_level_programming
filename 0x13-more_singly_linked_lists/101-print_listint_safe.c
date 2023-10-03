#include "lists.h"

/**
 * free_listp - a function that frees a linked list
 * @head: the head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tp;
	listp_t *cr;

	if (head != NULL)
	{
		cr = *head;
		while ((tp = cr) != NULL)
		{
			cr = cr->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - a function that prints a linked list.
 * @head: the head of a list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hp, *new, *add;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hp);
	return (nnodes);
}
