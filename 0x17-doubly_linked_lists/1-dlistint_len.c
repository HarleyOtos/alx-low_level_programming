#include <stdlib.h>
#include "lists.h"

/**
  * dlistint_len - A function to counts the number of elements
  * in a doubly linked list
  * @h: Double linked list to count
  *
  * Return: Number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
