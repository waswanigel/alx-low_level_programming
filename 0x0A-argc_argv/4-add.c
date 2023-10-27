#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int b, sum = 0;
	char *num;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (a = 1; a < argc; a++)
	{
		num = argv[a];

		for (b = 0; b < strlen(num); b++)
		{
			if (num[b] < 48 || num[b] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
