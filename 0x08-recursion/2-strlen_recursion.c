#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @n: the string to be measured
 * Return: the length of the string
 */

int _strlen_recursion(char *n)
{
	int longit = 0;

	if (*n)
	{
		longit++;
		longit += _strlen_recursion(n + 1);
	}

	return (longit);
}
