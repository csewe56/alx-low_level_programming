#include "main.h"

/**
 * print_square - Prints squares of size n
 * @size: the number of times and squares to be printed
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
