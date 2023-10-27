#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int len = 0;

	int i = 0;

	char temp;

	while (s[i++])
	{
		len++;
	}

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;

		_putchar(s[i]);
	}
	_putchar('\n');
}
