#include <stdio.h>
#include <stdlib.h>

/**
 * calculateCoins - finds the number of coins greedily to give cents back
 * @cents: the cents to give back
 */
void calculateCoins(int cents);

void calculateCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};

	int coinsCount = 0;

	int i;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coinsCount++;
		}
	}
	printf("%d\n", coinsCount);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	calculateCoins(cents);

	return (0);
}
