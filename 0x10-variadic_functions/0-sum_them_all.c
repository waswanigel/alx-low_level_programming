#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - perfoms addition of all its parameters
 * @n: number of parameters to be passed to the function
 * @...: undefined number of parameters to be summed
 *
 * Return: sum of parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

