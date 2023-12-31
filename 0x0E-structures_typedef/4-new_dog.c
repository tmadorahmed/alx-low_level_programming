#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - function copy a string
 * @s: string to copy
 * Return: pointer
 */
char *_strcpy(char *s)
{
	int n;
	char *p;

	for (n = 0; s[n]; n++)
		;
	p = malloc(n + 1);
	if (p)
	{
		for (; n >= 0; n--)
			p[n] = s[n];
	}
	return (p);
}

/**
 * new_dog - creates a dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(*p));
	if (p == NULL)
		return (NULL);
	p->name = _strcpy(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strcpy(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}
