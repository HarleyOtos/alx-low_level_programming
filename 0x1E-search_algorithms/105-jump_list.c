#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located,
 *         or NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size);
	listint_t *prev = NULL;
	listint_t *curr = list;

	if (list == NULL)
		return (NULL);

	while (curr->n < value && curr->next != NULL)
	{
		prev = curr;
		for (size_t i = 0; i < jump && curr->next != NULL; i++)
			curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, curr->index);
	size_t end = curr->index;

	curr = prev;

	while (curr->n < value)
	{
		if (curr->index == end)
			return (NULL);
		curr = curr->next;
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
	}

	if (curr->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
		return (curr);
	}

	return (NULL);
}
