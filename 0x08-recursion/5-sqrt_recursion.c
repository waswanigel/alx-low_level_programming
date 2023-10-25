#include "main.h"

int _sqrt_finder(int n, int x);

/**
 * _sqrt_recursion - takes input n and initilizes recusive process with
 *			initial guess root of 1
 * @n: the number to find square root
 * Return: natural squareroot if present, else -1
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_finder(n, 1));
}

/**
 * _sqrt_finder - recursively guesses to find the sqr root
 * @n: the number for whose sqrt we are looking for
 * @x: incremental guesses till we find the natural root if existent
 *
 * Return: -1 if n is negative/ ntrl sqrt is non existent, or the sqrt, or
 *		recursively calls the finder function
 */

int _sqrt_finder(int n, int x)
{

	if (n < 0)
		return (-1);

	if (x == n / 2)
		return (-1);

	if (x * x == n)
		return (x);

	if (x * x > n)
	{
		return (-1);
	}

	return (_sqrt_finder(n, x + 1));
}
