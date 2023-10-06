#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
	putchar(b);
	}

	putchar('\n');

	return (0);
}
