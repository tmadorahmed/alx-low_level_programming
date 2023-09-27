#include "lists.h"
/**
 * insert_nodeint_at_index - a function that adds a new node to a linked list
 * at a given position
 * @head : the pointer to the head of the list
 * @idx  : the index of the list where the new node will be added
 *         (indices start at 0)
 * @n    : the value for the new node to be added
 * Return: the pointer to the new node,
 *         or NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nw, *tem = *head;
unsigned int node;

nw = malloc(sizeof(listint_t));

if (nw == NULL)
return (NULL);

nw->n = n;

if (idx == 0)
{
nw->next = tem;
*head = nw;
return (nw);
}

for (node = 0; node < (idx - 1); node++)
{
if (tem == NULL || tem->next == NULL)
return (NULL);

tem = tem->next;
}

nw->next = tem->next;
tem->next = nw;

return (nw);
}
