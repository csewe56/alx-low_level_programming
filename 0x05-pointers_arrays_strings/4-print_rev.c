#include "main.h"

/**
 * print_rev - reverses a string
 * @s: pointer to be updated
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}
