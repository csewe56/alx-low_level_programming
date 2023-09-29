#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * min_coins - Calculate the minimum number of coins needed for change.
 * @cents: The amount in cents for which to make change.
 *
 * Return: The minimum number of coins needed.
 */
int min_coins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
	if (cents >= 25)
		cents -= 25;
	else if (cents >= 10)
		cents -= 10;
	else if (cents >= 5)
		cents -= 5;
	else if (cents >= 2)
		cents -= 2;
	else
		cents -= 1;

	coins++;
	}

	return (coins);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 (Success) or 1 (Error).
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	int coins = min_coins(cents);

	printf("%d\n", coins);

	return (0);
}

