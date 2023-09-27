#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - a function that calculates the sum of
 * all the data (n) of a linked list
 * @head : the pointer to the head of the list
 * Return: the sum of all the data (n),
 *         or 0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
int a;

a = 0;

while (head)
{
a += head->n;
head = head->next;
}
return (a);
}
