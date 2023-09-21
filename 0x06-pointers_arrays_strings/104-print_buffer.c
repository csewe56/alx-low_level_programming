#include "main.h"
#include <stdio.h>

void print_hex(char *b, int size, int i);
void print_chars(char *b, int size, int i);

/**
 * print_buffer - Prints the content of a buffer with specific formatting.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		print_hex(b, size, i);

		print_chars(b, size, i);
	}
}

/**
 * print_hex - Prints the hexadecimal representation of buffer contents.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 * @i: The current position in the buffer.
 */
void print_hex(char *b, int size, int i)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			printf("%02x", (unsigned char)b[i + j]);
		}
		else
		{
			printf("  ");
		}

		if (j % 2 == 1)
		{
			printf(" ");
		}
	}
}

/**
 * print_chars - Prints the ASCII characters from the buffer.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 * @i: The current position in the buffer.
 */
void print_chars(char *b, int size, int i)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			if (b[i + j] >= 32 && b[i + j] <= 126)
			{
				putchar(b[i + j]);
			}
			else
			{
				putchar('.');
			}
		}
	}
	putchar('\n');
}


