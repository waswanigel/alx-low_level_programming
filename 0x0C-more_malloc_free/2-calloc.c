#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte of each array element
 * Return: NULL if nmemb or size = 0/ if malloc fails. otherwise ptr to
 *		allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	p = malloc(len);

	if (p == NULL)
		return (NULL);

	while (i < len)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
