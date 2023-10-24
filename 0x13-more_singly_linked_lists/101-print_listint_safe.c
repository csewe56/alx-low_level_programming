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
	const listint_t *slow_ptr, *fast_ptr;

	slow_ptr = head;
	fast_ptr = head;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		printf("%d\n", slow_ptr->n);
		node_count++;

		if (slow_ptr == fast_ptr)
		{
			fprintf(stderr, "-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			exit(98);
		}
	}

	return (node_count);
}


