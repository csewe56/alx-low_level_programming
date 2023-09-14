#include "main.h"

/**
 * print_line - Draws a straight line
 * @a:number of lines to be drawn
 * Return:Always 0.
 */
void print_line(int a)
{
	int x;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < a; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
