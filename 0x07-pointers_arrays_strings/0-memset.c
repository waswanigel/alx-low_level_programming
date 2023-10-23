#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: character pointer
 * @b: constant filled in the memory area
 * @n: bytes of the memory area
 *
 * Return: pointer to a memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}
