#include "main.h"
#include <stdio.h>
/**
 *numlength - return the length of string
 *
 * @num: operand number
 *
 * Return: number of digit
 */

int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - the entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, initielos;
	unsigned long int f1 = 1;
	unsigned long int f2 = 2;
	unsigned long int sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		initielos = numlength(mx) - 1 - numlength(f1);
		while (f1o > 0 && initielos > 0)
		{
			printf("%d, ", 0);
			initielos--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
