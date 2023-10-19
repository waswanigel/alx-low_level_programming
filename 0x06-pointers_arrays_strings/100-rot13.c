#include "main.h"

/**
 * rot13 - encoded a string by rotating 13 places
 * @str: string to be rot13ed
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;

	char rawStr[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char strRot13[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == rawStr[j])
			{
				str[i] = strRot13[j];
				break;
			}

		}

	}
	return (str);
}
