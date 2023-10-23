#include "main.h"

/**
 * print_diagsums -  prints sum of the 2 diagonals of a sqr matrix of integers
 * @a: square matrix
 * @size: the matrix size
 */

void print_diagsums(int *a, int size)
{
	int sum_mainDiag = 0;

	int sum_antiDiag = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		sum_mainDiag += a[i * size + 1];
		sum_antiDiag += a[i * (size - 1 - i)];
	}

	print_num(sum_mainDiag);
	_putchar(',');
	_putchar(' ');
	print_num(sum_antiDiag);
	_putchar('\n');
}

/**
 * print_num - handles positive and negative numbers
 * @n: the number
 */
void print_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_num(n / 10);
	}
	_putchar((n % 10) + '0');
}

