#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the filename.
 * @text_content: the added content.
 *
 * Return: if the file exists 1. if the fails does not exist -1
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int nl;
	int rw;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		rw = write(i, text_content, nl);

		if (rw == -1)
			return (-1);
	}

	close(i);

	return (1);
}
