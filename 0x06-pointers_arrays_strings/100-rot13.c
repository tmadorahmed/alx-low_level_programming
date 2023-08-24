#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: string to encode
 * Return: address of str
 */

char *rot13(char *str)
{
	int i, j;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[j] == *(str + i))
			{
				*(str + i) = y[j];
				break;
			}
		}
	}
	return (str);
}
