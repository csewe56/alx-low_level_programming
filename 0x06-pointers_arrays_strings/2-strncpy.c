#include "main.h"

/**
 * _strncpy - Copies a string up to n characters.
 * @dest: The destination string where the copy will be stored.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If n is greater than the length of src, pad with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

