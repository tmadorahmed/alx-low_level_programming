#include "main.h"

/**
 * rev_string - Reverses a string.
 * @str: string to be reserved.
 */
void rev_string(char *str)
{
	int i = 0, len = 0;
	char t;

	while (str[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		t = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = t;
	}
}
