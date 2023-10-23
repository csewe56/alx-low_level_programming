#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 * If it fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;

		if (head < head->next)
		{
			fprintf(stderr, "Linked list loop detected\n");
			exit(98);
		}

		head = head->next;
	}

	return (node_count);
}

