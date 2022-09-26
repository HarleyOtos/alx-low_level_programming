#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: A pointer to byte s which match one of the bytes
 * in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return (s);
        }
        s++;
    }
    return ('\0');
}