#include "3-calc.h"
/**
 * op_add - Returns sum of two integer arguments
 * @a: integer 1
 * @b: integer 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: num1
 * @b: num2
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: num1
 * @b: num2
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: num1
 * @b: num2
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of division
 * @a: num1
 * @b: num2
 *
 * Return: Remainder of div a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
