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
while (count >= 10 && count <= 15)
{
	putchar(87 + count);
	count++;
}
printf("\n");
return (0);
}
