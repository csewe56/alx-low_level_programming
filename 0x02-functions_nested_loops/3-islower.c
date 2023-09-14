#include "main.h"

/**
 * _islower - Checks if the letter is lowercase
 * @c: contains value to be compared
 * Return: 1 if lowercase 0 if otherwise
 */
int _islower(int c)
{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
