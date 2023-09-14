#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter. lowercase or uppercase
 *
 * @c: The value to be checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
