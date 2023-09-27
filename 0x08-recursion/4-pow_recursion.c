#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
	/* Base case: If y is -tive, return -1 to indicate an error. */
	if (y < 0)
	{
		return (-1);
	}

	/* Base case: If y is 0, the result is 1. */
	if (y == 0)
	{
	return (1);
	}

	/* Recursive case: Calculate the result using recursion. */
	return (x * _pow_recursion(x, y - 1));
}

