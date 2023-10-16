#include "main.h"

/**
 * _strcpy - copies string pointed to by @src, including null byte,
 *		to buffer pointed to by @dest
 * @dest: destination buffer to copy string to
 * @src: source of the string to copy
 *
 * Return: A pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i++] = '\0';

	return (dest);
}
