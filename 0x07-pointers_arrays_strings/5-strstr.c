#include "main.h"
/**
 * _strstr - locates 1st occurence of a substring in a string
 * @haystack: searched string
 * @needle: substring searched for
 *
 * Return: ptr to start of located substring or null if unlicated
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack, *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return ((char *)0);
}
