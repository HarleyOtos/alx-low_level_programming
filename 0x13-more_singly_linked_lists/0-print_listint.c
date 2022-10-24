#include <stdio.h>
#include "lists.h"

/**
  * print_listint - A function to prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}

	return (count);
}
