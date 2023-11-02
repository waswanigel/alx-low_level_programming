#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: ptr to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: if new_size == old_size - ptr
 *		if new_size == 0 && ptr != NULL -> NULL
 *		otherise - ptr to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
