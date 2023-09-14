#include <stdio.h>

/**
 * main - Prints letters of the alphabet except e qnd q
 *
 *  Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
	{
		putchar(c);
	}
	}

	putchar('\n');

	return (0);
}
