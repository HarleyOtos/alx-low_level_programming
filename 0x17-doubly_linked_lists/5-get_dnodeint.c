#include "lists.h"
#include <stdlib.h>

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: Head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}
