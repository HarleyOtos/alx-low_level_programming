#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hash table
 * @size: the size an array
 *
 * Return: A poniter to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	if (size < 1)
		return (NULL);

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);

	htable->array = calloc(size, sizeof(hash_node_t *));
	htable->size = size;

	if ((htable->array) == NULL)
	{
		free(htable);
		return (NULL);
	}

	return (htable);
}
