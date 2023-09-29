#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Prevent unused variable warning */

	printf("%d\n", argc - 1);

	return (0);
}

