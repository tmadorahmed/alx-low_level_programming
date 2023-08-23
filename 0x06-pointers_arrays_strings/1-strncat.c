#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * @i: amount of bytes used from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int i)
{
	int c = 0, c2 = 0;

	while (*(dest + c) != '\0')
	{
		c++;
	}

	while (c2 < i)
	{
		*(dest + c) = *(src + c2);
		if (*(src + c2) == '\0')
			break;
		c++;
		c2++;
	}
	return (dest);
}
