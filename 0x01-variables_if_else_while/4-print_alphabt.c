#include <stdio.h>

/**
 * main -  prints the alphabet in lowercas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		else
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
