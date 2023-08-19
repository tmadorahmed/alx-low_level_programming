#include "main.h"

/**
 * times_table -uses _putchar to print char table
 * return char in lower 10 time
 */
void times_table(void)
{
	int n;
	int l;
	int p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (l = 1; l <= 9; l++)
		{
			_putchar(',');
			_putchar(' ');
			p = n * l;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
