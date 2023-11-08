#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array
 * @size: number of array elements
 * @cmp: ptr to function that compares the values
 *
 * Return:  index of the first element for which the cmp func doesnt return 0
 *		if array is empty return -1, no match return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}

