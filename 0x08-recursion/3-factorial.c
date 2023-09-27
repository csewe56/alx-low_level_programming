#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The input number.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */
int factorial(int n)
{
	/* Base case: If 'n' is -tive, return -1 to indicate an error. */
	if (n < 0)
	{
	return (-1);
	}

	/* Base case: If 'n' is 0, the factorial is 1. */
	if (n == 0)
	{
	return (1);
	}

	/* Recursive case: Calculate factorial using recursion. */
	return (n * factorial(n - 1));
}

