#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long f1;
	unsigned long f2;
	unsigned long sum;

	f1 = 0;
	f2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("lu%", sum);
		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
