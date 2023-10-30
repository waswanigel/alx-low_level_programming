#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters and intializes
 *			it with a specific char
 * @size: size of the array
 * @c: the character to be intialized
 * Return: null if size is 0, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * (sizeof(char)));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
