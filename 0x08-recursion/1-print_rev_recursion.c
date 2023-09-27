#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: At the end of the string ('\0'), return. */
	if (*s == '\0')
	{
		return;  /* Return to exit the function. */
	}

	/* Recursively call the function with the next character in the string. */
	_print_rev_recursion(s + 1);

	/* After the recursive call, print the current character. */
	_putchar(*s);
}


