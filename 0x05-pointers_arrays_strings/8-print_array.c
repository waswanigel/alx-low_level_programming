#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array of intergers
 * @a: the array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
	int i = 0;

	for ( i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
