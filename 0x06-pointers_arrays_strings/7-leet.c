#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string
 * Return: str
 */

char *leet(char *str)
{
	int i, j;

	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
				break;
			}
		}

	}
	return (str);
}
