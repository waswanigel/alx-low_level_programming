#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * countWords - counts words in a string
 * @str: the string
 * @d: the delimeter
 * Return: the number of words
 */

int countWords(char *str, char *d);

int countWords(char *str, char *d)
{
	char *portion, *temp;
	int wordcount;

	if (str == NULL || *str == '\0')
	{
		return (0);
	}
	wordcount = 0;

	temp = strdup(str);

	if (temp == NULL)
	{
		return (0);
	}
	portion = strtok(temp, d);

	while (portion != NULL)
	{
		wordcount++;

		portion = strtok(NULL, d);
	}
	free(temp);
	return (wordcount);
}
/**
 * strtow - splits a string to words
 * @str: the string
 * Return: the split words, NULL if str is NULL/ empty of func fails
 */

char **strtow(char *str)
{
	char **words, d[] = " ";
	int wordcount = countWords(str, d);
	int index = 0, i;
	char *portion;

	if (wordcount == 0)
	{
		return (NULL);
	}

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = (char **)malloc((wordcount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	portion = strtok(str, d);
	while (portion != NULL)
	{
		words[index] = strdup(portion);
		if (words[index] == NULL)
		{
			for (i = 0; i < index; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		index++;

		portion = strtok(NULL, d);
	}
	words[wordcount] = NULL;

	return (words);
}
