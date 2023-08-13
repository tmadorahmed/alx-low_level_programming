#include <stdio.h>

/**
 * main -  prints the alphabet in lowercas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char cc;

	c = 'a';
	cc = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (cc <= 'Z')
	{
		putchar(cc);
		c++;
	}
	putchar('\n');
			return (0);
}
