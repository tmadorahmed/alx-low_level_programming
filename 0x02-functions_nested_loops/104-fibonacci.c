#include <stdio.h>
/**
 * main - the entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int f = 1;
	unsigned long int b = 0;
	unsigned long int a = 0;
	int x;

	for (x = 1; x < 98; x++)
	{
		a = b;
		b = f;
		f = a + b;
		printf("%ld, ", f);
	}
	printf("%ld", (f + b));
	return (0);
}
