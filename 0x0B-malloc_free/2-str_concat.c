#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0, b = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
		i++;

	while (s2[i])
		j++;
	len = i + j;

	s = (char *)malloc((sizeof(char) * (len + 1)));

	if (s == NULL)
		return (NULL);
	j = 0;

	while (b < len)
	{
		if (b <= i)
		{
			s[b] = s1[b];
		}
		if (b >= i)
		{
			s[b] = s2[j];
			j++;
		}
		b++;
	}
	s[b] = '\0';
	return (s);
}
