#include "main.h"

/**
 * _strncat - appends at most n characters from src to dest
 * @dest:  destination string
 * @src: source string
 * @n: max appended characters
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];

		i++;
	}
	dest[i] = '\0';
	return (dest);
}
