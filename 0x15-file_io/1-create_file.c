#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the filename.
 * @text_content: the content writed in the file.
 *
 * Return: if it success 1 .if it fails -1.
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	int nl;
	int rw;

	if (!filename)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	rw = write(i, text_content, nl);

	if (rw == -1)
		return (-1);

	close(i);

	return (1);
}
