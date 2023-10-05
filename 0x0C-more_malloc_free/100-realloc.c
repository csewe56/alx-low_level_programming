#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory block to be reallocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	for (unsigned int i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}

