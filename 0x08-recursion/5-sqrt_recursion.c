#include "main.h"

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of 'n' if it's a perfect square, or -1 if not.
 */
int sqrt_helper(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: The square root of 'n' if it's a perfect square, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	/* Base case: If n is -tive or < 2, return n to a perfect sq, or -1 if not. */
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}

	/* Call the recursive helper function. */
	return (sqrt_helper(n, 2));
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of 'n' if it's a perfect square, or -1 if not.
 */
int sqrt_helper(int n, int guess)
{
	/* Base case: If the sqd is equal to 'n', return the guess as sqrt. */
	if (guess * guess == n)
	{
	return (guess);
	}
	/* Base case: If sqd > 'n', n doesn't have a natural sqrt. */
	else if (guess * guess > n)
	{
	return (-1);
	}

	/* Recursive case: Increment the guess and make a recursive call. */
	return (sqrt_helper(n, guess + 1));
}


