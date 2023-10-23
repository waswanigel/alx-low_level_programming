#include "main.h"

/**
 * _strpbrk -  searches string s for any of a set of bytes
 * @s: searched string
 * @accept: string with set of bytes
 *
 * Return: pointer to matching byte, or null if unmatched
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return ((char *)s);
			}
			a++;
		}
		s++;
	}

	return ((char *)0);
}
