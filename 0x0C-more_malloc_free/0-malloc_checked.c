#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memor
 * Return: allocated memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
