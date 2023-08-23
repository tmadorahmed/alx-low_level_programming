#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int c = 0, c2 = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (c2 >= 0)
	{
		*(dest + c) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c++;
		c2++;
	}
	return (dest);
}
