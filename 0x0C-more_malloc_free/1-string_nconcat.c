#include <stdlib.h>
#include "stdlib.h"

/**
 * string_nconcat - concatenates 2 strings to str of specific bytes
 * @s1: string 1
 * @s2: string 2
 * @n: max no. of bytes of s2 to concat to s1
 * Return: pointer to newly allocated space in memory, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str3;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	str3 = malloc(sizeof(char) * (len + 1));

	if (str3 == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		str3[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str3[len++] = s2[i];

	str3[len] = '\0';

	return (str3);
}
