#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to compare against.
 *
 * Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	int i = 0;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return (count);
		}

		count++;
		s++;
	}

	return (count);
}


