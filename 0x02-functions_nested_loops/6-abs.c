#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the integer to be evaluated
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else
	{
		return (c);
	}
}
