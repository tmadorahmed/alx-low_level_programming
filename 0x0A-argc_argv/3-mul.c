#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the multiplication of two numbers followed by a new line
 * @argc: number of arguments must be exactly two numbers
 * @argv: argument vector
 * Return: if the number receives two arguments 0, otherwise 1
 */

int main(int argc, char *argv[])
{
	int r1, r2;

	r1 = r2 = 0;
	if (argc == 3)
	{
		r1 = atoi(argv[1]);
		r2 = atoi(argv[2]);
		printf("%d\n", r1 * r2);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
