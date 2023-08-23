#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 == s2, otherwise, another number
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, o = 0;

	while (o == 0)
	{
		if ((*(s1 + n) == '\0') && (*(s2 + n) == '\0'))
			break;
		o = *(s1 + n) - *(s2 + n);
		n++;
	}

	return (o);
}
