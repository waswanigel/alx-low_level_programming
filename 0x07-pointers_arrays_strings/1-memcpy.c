#include "main.h"

/**
 * _memcpy - copies n bytes frm mem area src to mem area dest
 * @dest: destination to copy
 * @src: source area to copy
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_original_position = dest;

	/*char *src_original_position = src;*/

	while (n--)
	{
		*dest++ = *src++;
	}

	return (dest_original_position);
}
