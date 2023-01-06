#include "hash_tables.h"

/**
 * hash_table_set - A function that adds element to the hash table
 * @ht: The hash table to update or add key/value to
 * @key: the key value and can't be an empty string
 * @value: The associated value with the key
 * 
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i = 0;
    hash_node_t *elem = NULL, *new_node = NULL;

    if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
        return (0);
    
    i = key_index((unsigned char *) key, ht->size);
    elem = ht->array[i];

    if (elem && strcmp(key, elem->key) == 0)
    {
        free(elem->value);
        elem->value = strdup(value);
        return (1);
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[i];
    ht->array[i] = new_node;
    return (1);
}
