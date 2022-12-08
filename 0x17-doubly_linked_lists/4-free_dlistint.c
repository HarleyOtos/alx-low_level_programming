#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_dlistint - Free a doubly linked list
  * @head: Head of the doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
