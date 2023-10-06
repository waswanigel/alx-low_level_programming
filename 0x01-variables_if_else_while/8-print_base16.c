#include <stdio.h>

/**
 * main - Prints the 16 hex symbols using putchar
 *
 * Return: Always (Success)
 */

int main(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}

	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}

	putchar('\n');

	return (0);
}
