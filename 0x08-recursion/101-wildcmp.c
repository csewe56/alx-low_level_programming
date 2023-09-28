#include "main.h"
#include <stdio.h>

/**
 * wildcmp_recursive - Helper compare strings with a wildcard character '*'.
 * @s1: The first input string.
 * @s2: The second input string with '*' as a wildcard character.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp_recursive(char *s1, char *s2)
{
	/* If both strings are empty, they are identical. */
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
	return (1);
	}

	/* If the characters match or s2 has a wildcard '*', move both pointers. */
	if (*s1 == *s2 || (*s2 == '*' && *s1 != '\0'))
	{
	return (wildcmp_recursive(s1 + 1, s2 + 1));
	}

	/* If s2 has a wildcard '*', use it to replace characters in s1 or skip. */
	if (*s2 == '*')
	{
	return (wildcmp_recursive(s1, s2 + 1) || wildcmp_recursive(s1 + 1, s2));
	}

	/* If none of the above conditions are met, the strings are not identical. */
	return (0);
}

/**
 * wildcmp - Compares two strings with a wildcard character '*'.
 * @s1: The first input string.
 * @s2: The second input string with '*' as a wildcard character.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
	return (0);
	}

	return (wildcmp_recursive(s1, s2));
}


