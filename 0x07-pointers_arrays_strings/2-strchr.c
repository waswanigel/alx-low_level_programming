#include "main.h"

/**
 * _strchr - locates a character in the string
 * @s: string to search for character
 * @c: character to be located
 *
 * Return: pointer to character c in str s or null if c is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((char *)0);
}
