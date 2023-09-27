#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The input string to be printed.
 */
void _puts_recursion(char *s)
{
    /* Base case: At end of the string ('\0'), print a new line. */
if (*s == '\0')
{
	_putchar('\n');  /* Call the _putchar function to print a new line. */
	return;  /* Return to exit the function. */
}

    /* Print the current character pointed to by 's'. */
_putchar(*s);

    /* Recursively call the function with the next character in the string. */
_puts_recursion(s + 1);
}

