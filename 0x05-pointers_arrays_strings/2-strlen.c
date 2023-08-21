#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string.
 *
 * Return: length.
 */
size_t _strlen(const char *s)
{
	size_t l = 0;

	while (*s++)
		l++;

	return (l);
}
