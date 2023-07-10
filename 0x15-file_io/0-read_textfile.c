#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: file to read
 * @letters: number of letter in file
 *
 * Return: the number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t wrt;
	ssize_t p;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	p = read(file_d, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, p);
	free(buffer);
	close(file_d);

	return (wrt);
}
