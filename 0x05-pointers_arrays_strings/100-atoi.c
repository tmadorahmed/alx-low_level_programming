#include <stdio.h>

/**
 * _atoi - a function that converts string to integer
 * @str: An input string
 * Return: integer from conversion
 */
int _atoi(char *str)
{
	int s = 1;
	unsigned int t = 0;
	char null_flag = 0;

	while (*str)
	{
		if (*str == '-')
			s *= -1;

		if (*str >= '0' && *str <= '9')
		{
			null_flag = 1;
			t = t * 10 + *str - '0';
		}

		else if (null_flag)
			break;
		str++;
	}

	if (s < 0)
		t = (-t);

	return (t);
}
