#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: the number to extract the bit from
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (index >= bits)
		return (-1);

	return ((n >> index) & 1);
}
