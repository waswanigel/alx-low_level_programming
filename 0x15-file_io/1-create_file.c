#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure/ filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_chars, len;
	int trunC = O_CREAT | O_WRONLY | O_TRUNC;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		trunC |= O_APPEND;

	file_descriptor = open(filename, trunC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

		write_chars = write(file_descriptor, text_content, len);
		if (write_chars == -1 || write_chars != len)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}
