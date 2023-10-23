#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	current = *h;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
		size++;
	}

	*h = NULL;

	return (size);
}

