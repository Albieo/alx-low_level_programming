#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: name of the file.
 * @text_content: text to add to file.
 *
 * Return: 1 (Success), -1 (Error)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	wrt = write(file_d, text_content, len);

	if (file_d == -1 || wrt == -1)
		return (-1);

	close(file_d);

	return (1);
}
