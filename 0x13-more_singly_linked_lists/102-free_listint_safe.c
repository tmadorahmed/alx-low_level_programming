#include "lists.h"

/**
 * free_listp2 - a function that frees a linked list
 * @head: the head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
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
 * free_listint_safe - a function that frees a linked list.
 * @h: the head of a list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnd = 0;
	listp_t *hp, *new, *add;
	listint_t *cr;

	hp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hp);
				return (nnd);
			}
		}

		cr = *h;
		*h = (*h)->next;
		free(cr);
		nnd++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (nnd);
}
