#include "main.h"

/**
 * print_times_table -uses _putchar to print char table
 * return char in lower 100 time
 * @n: input
 */
void print_times_table(int n)
{
	int x;
	int l;
	int p;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; ++x)
		{
			_putchar(48);
			for (l = 1; l <= n; ++l)
			{
				_putchar(',');
				_putchar(' ');
				p = x * l;
				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
