#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @d: A pointer to destination of string
 * @s: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *d, char *s)
{
	char *au = d;

	while (*s)
		*d++ = *s++;
	return (au);
}
