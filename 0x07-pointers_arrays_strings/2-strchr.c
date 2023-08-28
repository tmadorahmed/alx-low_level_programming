#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: input
 * @x: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char x)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == x)
			return (&s[i]);
	}
	return (0);
}
