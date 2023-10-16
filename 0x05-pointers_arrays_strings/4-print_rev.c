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

	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	len = count;

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - 1 - i]);
	}
	_putchar('\n');
}
