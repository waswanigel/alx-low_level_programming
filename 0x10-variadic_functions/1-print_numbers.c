#include "variadic_functions.h"

/**
 * print_numbers - prints number arguments
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: elipsis
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
