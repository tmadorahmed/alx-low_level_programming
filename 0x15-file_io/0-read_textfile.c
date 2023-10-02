#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t lr, lw;
	char *buffer;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(i);
		return (0);
	}
	lr = read(i, buffer, letters);
	close(i);
	if (lr == -1)
	{
		free(buffer);
		return (0);
	}
	lw = write(STDOUT_FILENO, buffer, lr);
	free(buffer);
	if (lr != lw)
		return (0);
	return (lw);
}
