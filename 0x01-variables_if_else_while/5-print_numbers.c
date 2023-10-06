#include <stdio.h>

/**
 * main - Prints single digit base 10 numbers from 0 then newline
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
