#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}

