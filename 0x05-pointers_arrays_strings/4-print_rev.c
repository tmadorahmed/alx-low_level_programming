#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @str: string to be reserved.
 */
void print_rev(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	str--;
	len--;
	while (len >= 0)
	{
		_putchar(*str);
	str--;
	len--;
	}
	_putchar('\n');
}
