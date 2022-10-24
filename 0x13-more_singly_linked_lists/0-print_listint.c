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
int i = 0;

	while (h != NULL)
	{
	printf("%i\n", h->n);
			h = h->next;
			i++;
	}
	return (i);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check code.
 *
 * Return: Always 0.
 */
int main(void) {
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL) {
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
