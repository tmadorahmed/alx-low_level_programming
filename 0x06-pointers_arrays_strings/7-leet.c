#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: string to encode
 * Return: address of str
 */

char *leet(char *str)
{
	int i, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (x[j] == *(str + i))
				*(str + i) = y[j];
		}
	}
	return (str);
}
