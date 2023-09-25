#include "lists.h"
/**
 * free_listint2 - afunction that free the linked list
 * @head : the pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *tem;

if (head == NULL)
return;

while (*head)
{
tem = *head;
*head = (*head)->next;
free(tem);
}
head = NULL;
}
