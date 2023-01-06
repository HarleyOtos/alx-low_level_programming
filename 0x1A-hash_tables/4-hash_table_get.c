#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key looking for
 * 
 * Return: The value associated with the element
 * or NULL if the key could not be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i = 0;
    hash_node_t *elem = NULL;

    if (ht == NULL || key == NULL)
        return (NULL);

    i = key_index((unsigned char *) key, ht->size);
    elem = ht->array[i];

    if (elem == NULL)
        return (NULL);

    while (strcmp(key, elem->key) != 0)
        elem = elem->next;

    return (elem->value);    
}
