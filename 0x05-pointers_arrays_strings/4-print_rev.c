#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void return type
 */
void print_rev(char *s)
{
	int len = 0;

	int i;

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
