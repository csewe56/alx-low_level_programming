#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append src to dest, up to n bytes */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add a terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}

