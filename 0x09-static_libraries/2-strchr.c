#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String provided
 * @c: Character tobe located
 * Return: Pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
