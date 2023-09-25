#include "main.h"

/**
 * print_chessboard - prints a 2D chessboard
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar (a[x][y]);
			y++;
		}

		_putchar ('\n');
		x++;
	}
}

