#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list
 * @h: The double linked list to prints
 *
 * Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++length;
		h = h->next;
	}

	return (length);
}
