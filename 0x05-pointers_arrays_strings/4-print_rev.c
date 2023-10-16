#include "main.h"

/**
 * _strlen - returns lenth of a string
 * @s: the string
 *
 * * Return: _strlen returns lenght of string;
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * print_rev - prints a string in reverse
 * @s: the string
 * Return: void return type
 */
void print_rev(char *s)
{
	int len = 0;

	int i = 0;

	char temp;

	len = _strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;

		_putchar(*s);
	}
}
