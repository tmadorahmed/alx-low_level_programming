#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * @head : the pointer to the head of the linked list
 * Return: the head node's data (n)
 *         or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tem;
int n;

tem = *head;

if (tem == NULL)
return (0);

*head = tem->next;
n = tem ->n;
free(tem);
return (n);
}


