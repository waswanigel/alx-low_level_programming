#include "main.h"
/**
 * _puts - prints a string and a newline to the stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
