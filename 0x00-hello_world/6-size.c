#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("\n");
		printf("Size of an int:%lu byte(s)", sizeof(int));
	printf("\n");
	printf("Size of a long int:%lu byte(s)", sizeof(long int));
	printf("\n");
printf("Size of a long long int:%lu byte(s)", sizeof(long long int));
printf("\n");
printf("Size of a float:%lu byte(s)", sizeof(float));
printf("\n");
return (0);
}
