#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @i: number to return the factorial from
 * Return: factorial of n
 */

int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
