#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @ch: pointer to a character
 * Return: ch
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
