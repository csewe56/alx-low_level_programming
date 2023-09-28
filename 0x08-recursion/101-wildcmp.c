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
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}


