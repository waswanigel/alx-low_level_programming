#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: the string to be converted
 *
 * Return: the integer
 */
int _atoi(char *s)
{
	int np = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
		{
			np *= - 1;
		}
		else if ((*s - '0') >= 0 && (*s - '0') <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
			break;
	}
	while *s++;
	
	return(n * np)
}
