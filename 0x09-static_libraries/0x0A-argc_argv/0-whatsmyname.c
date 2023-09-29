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
	if (argc >= 1)
	{
		char *program_name = argv[0];

		printf("%s\n", program_name);
	}

	return (0);
}

