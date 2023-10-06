#include <stdio.h>

/**
 * main - Prints single digit no combs separated by commas
 *
 * Return: Always (Success);
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
