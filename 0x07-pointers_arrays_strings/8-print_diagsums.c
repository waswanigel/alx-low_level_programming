#include "main.h"
#include <stdio.h>

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

	printf("%d, %d\n", sum_mainDiag, sum_antiDiag);
}
