#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers (orderd from min to max)
 * @min: first integer of the array
 * @max: last integer of the array
 * Return: ptr to new array. if min > max or malloc fails - NULL
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
