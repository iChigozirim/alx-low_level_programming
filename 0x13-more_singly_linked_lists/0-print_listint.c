#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint -  Prints all the elements of a listint_t list.
 * @h: The List_t list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		 nodes++;
		 printf("%d\n", h->n);

		 h = h->next;
	}

	return (nodes);
}

