#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input integer.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	/* Base case: If n is less than or equal to 1, it's not prime. */
	if (n <= 1)
	{
	return (0);
	}

	/* Check for prime by iterating from 2 to the sqrt of n. */
	for (i = 2; i * i <= n; i++)
	{
	/* If n is divisible by any number in this range, it's not prime. */
	if (n % i == 0)
	{
	return (0);
	}
	}

	/* If no divisor was found in the loop, n is prime. */
	return (1);
}



