#include <stdio.h>

/**
 * main - Prints single digit base 10 using putchar
 *
 * Return: Always (Success)
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
