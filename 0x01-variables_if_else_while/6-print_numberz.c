#include <stdio.h>

/**
 * main -  prints the alphabet in lowercas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count;
count = 0;
while (count < 10)
{
	putchar(48 + count);
	count++;
}
putchar('\n');
return (0);
}
