#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string to be iterated through
 * @accept: start of set to be checked
 *
 * Return: no. of bytes in initial seg of s (consist only of bytes frm accept)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int flag = 0;

		char *a;

		for (a = (char *)accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
