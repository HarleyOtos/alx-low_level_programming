#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key
 * @key: The key
 * @size: The size of the hash table
 *
 * Return: The index of a key in a hash table
*/
unsigned long int key_index(const char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
