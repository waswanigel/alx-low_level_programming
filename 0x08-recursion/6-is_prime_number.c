#include "main.h"

int divisibility_check(int n, int divider);

/**
 * is_prime_number - checks if integer is a prime number or not
 * @n: the integer
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	int divider = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (divisibility_check(n, divider));
}

/**
 * divisibility_check - check if integer is divisible
 * @n: the integer
 * @divider: the divider being checked
 *
 * Return: 1 if prime ,zero if not prime else calls itself
 */
int divisibility_check(int n, int divider)
{
	if (n % divider == 0)
		return (0);
	if (divider == (n / 2))
		return (1);

	return (divisibility_check(n, divider + 1));
}
