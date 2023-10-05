#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Malloc for an array and initializes it with 0.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the malloc, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;

	return (arr);
}

