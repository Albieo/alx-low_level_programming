#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: file to create
 * @text_content: string to read in file
 *
 * Return: Number of bytes, -1 (Error)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, wrt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file_d, text_content, len);

	if (file_d == -1 || wrt == -1)
	{
		return (-1);
	}

	close(file_d);

	return (1);
}
