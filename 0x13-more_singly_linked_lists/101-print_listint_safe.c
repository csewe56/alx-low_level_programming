#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list. If it fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;

		if (current > current->next)
		{
			current = current->next;
			fprintf(stderr, "-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

		current = current->next;
	}

	return (node_count);
}







