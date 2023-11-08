#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to the function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
