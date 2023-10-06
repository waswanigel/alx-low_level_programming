#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: Always (Success)
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		putchar(b);

	putchar('\n');

	return (0);
}
