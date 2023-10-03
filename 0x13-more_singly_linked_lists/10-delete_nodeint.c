#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node by a given
 *                           index of a linked list
 * @head : the pointer to the head of the list
 * @index: the index of the node to be deleted
 *         (indices starting at 0)
 * Return: if function succeeds 1,
 *        if function fails -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tp, *copy = *head;
unsigned int n;

if (copy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (n = 0; n < (index - 1); n++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tp = copy->next;
copy->next = tp->next;
free(tp);
return (1);
}
