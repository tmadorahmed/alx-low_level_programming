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
while (count <= 9)
{
	putchar(48 + count);
	if (count < 9)
	{
		putchar(',');
		putchar(' ');
	}
	count++;
}
printf("\n");
return (0);
}
