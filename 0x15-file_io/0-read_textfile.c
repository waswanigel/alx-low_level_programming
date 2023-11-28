#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX std output
 * @filename: pointer to the file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 *		if write fails/doesnt write the expected amt of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  file_descriptor, read_chars, write_chars;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	read_chars = read(file_descriptor, buffer, letters);
	write_chars = write(STDOUT_FILENO, buffer, read_chars);

	if (read_chars == -1 || write_chars == -1 || write_chars != read_chars)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_chars);
}
