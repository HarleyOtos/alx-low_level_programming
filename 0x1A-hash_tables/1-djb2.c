#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implement the djb2 algorithm
 * @str: The value to the function
 * 
 * Return: A number representation of the given string
*/
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
