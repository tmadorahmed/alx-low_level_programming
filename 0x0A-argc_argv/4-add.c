#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the addition of positive numbers followed by a new line
 * @argc: number of arguments
 * @argv: argument vector
 * Return: -1 if any number contains non-digit symbols, otherwise 0
 */

int main(int argc, char *argv[])
{
	int n, digit, s = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			if (argv[n][digit] < '0' || argv[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[n]);
	}

	printf("%d\n", s);

	return (0);
}
