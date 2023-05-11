#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file(int file_d);
char *create_new_file(char *file0);

/**
 * main - copies the content of a file to another file.
 *
 * @argc: number of argument in the program.
 * @argv: the command arguments to the program.
 *
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int r, w, from, to, buf_size = 1024;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_new_file(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, buf_size);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, buf_size);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 * close_file - closes file descriptors
 *
 * @file_d: The file descriptors passed to function
*/
void close_file(int file_d)
{
	int i;

	i = close(file_d);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_d);
		exit(100);
	}
}

/**
 * create_file - gives bytes to file buffer
 * 
 * @file0: The file buffer storage pointer.
*/
char *create_new_file(char *file0)
{
	char *buf;
	int buf_size = 1024;

	buf = malloc(buf_size * sizeof(char));

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", file0);
		exit(99);
	}

	return (buf);
}
