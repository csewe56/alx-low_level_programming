#include "main.h"

/**
 * puts_half - prints every other character of a string - half a string
 * @str: pointer to be updated
 * Return: void
 */

void puts_half(char *str)
{
	int x, last;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}

	last = (x + 1) / 2;

	for (x = last; str[x]; x++)
	{
		_putchar (str[x]);
	}

	_putchar ('\n');
}
