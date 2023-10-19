#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
	}
}
