#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_recursive - Helper  checks if a string is a palindrome.
 * @s: The input string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: If the start index is >= to the end index, it's a palindrome. */
	if (start >= end)
	{
	return (1);
	}

	/* If the characters at start and end don't match, it's not a palindrome. */
	if (s[start] != s[end])
	{
	return (0);
	}

	/* Recursively check the remaining characters. */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len;

	if (s == NULL)
	{
	return (0);
	}

	len = _strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}


