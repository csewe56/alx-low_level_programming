#include <stdio.h>
#include "main.h"

/**
 * main - prints program name and arguments
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}

