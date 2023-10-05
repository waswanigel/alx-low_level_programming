/**
 * File: 6-size.c
 * Auth: Nigel Waswa
 */

#include <stdio.h>

/**
 * main-Entry point for program execution.
 *
 * Description: This is the main function of a C program that prints
 * sizes of various types on the computer it is compiled and run on
 * and then returns zero.
 *
 * Return: 0 on Success.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
