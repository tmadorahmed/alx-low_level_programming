#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1.
 * at a given index.
 * @n: the pointer of an unsigned long int number.
 * @index: the index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
