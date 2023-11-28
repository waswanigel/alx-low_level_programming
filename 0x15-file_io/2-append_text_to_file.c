#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: The NULL terminated string to add to the end of the file.
 * Return: 1 on success and -1 on failure/ If filename is NULL
 *		if text_content is NULL 1 if file exists -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_chars, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_chars = write(file_descriptor, text_content, len);

	if (file_descriptor == -1 || write_chars == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
