#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: At the end of the string ('\0'), return 0. */
	if (*s == '\0')
	{
	return (0);
	}

	/* Recursively call the function with the next character in the string. */
	return (1 + _strlen_recursion(s + 1));
}

