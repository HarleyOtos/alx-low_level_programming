#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located, or NULL if value is
 * not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *last;

	if (list == NULL)
		return (NULL);

	express = list->express;
	last = list;

	while (express != NULL && express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);
		last = express;
		express = express->express;
	}

	if (express == NULL)
	{
		express = last;
		while (express->next != NULL)
			express = express->next;
		printf("Value found between indexes [%lu] and [%lu]\n",
		       last->index, express->index);
	}
	else
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       express->index, express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       last->index, express->index);
	}

	while (last != NULL && last->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       last->index, last->n);
		last = last->next;
	}

	if (last == NULL || last->n > value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       last->index, last->prev->index);
		return (NULL);
	}

	printf("Value checked at index [%lu] = [%d]\n",
	       last->index, last->n);
	return (last);
}
