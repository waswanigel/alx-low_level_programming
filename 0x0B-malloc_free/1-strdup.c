#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string given as a parameter
 * Return: pointer to a newly allocated space in memory (contains copy of str)
 */
char *_strdup(char *str)
{
	int i, len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		len++;

	duplicate = (char *)malloc(len + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
