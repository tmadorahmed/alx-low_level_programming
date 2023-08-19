#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - printing numbers to 98,seprated by a column
 *
 * @c: counter.
 */
void print_to_98(int c)
{
	if (c >= 98)
	{
		while (c > 98)
			printf("%d, ", c--);
		printf("%d\n", c);
	}

	else
	{
		while (c < 98)
			printf("%d, ", c++);
		printf("%d\n", c);
	}
}
