#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: the head of the linked list.
 * @str: the string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t numb;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (numb = 0; str[numb]; numb++)
		;

	new_node->len = numb;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
