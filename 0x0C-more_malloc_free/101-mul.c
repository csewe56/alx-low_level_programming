#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiply two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 success, 98 incorrect no. of arg or non-digit inputs.
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}

