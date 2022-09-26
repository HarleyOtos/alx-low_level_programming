#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: The string
 * @needle: The substring to be located.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i;

    if (*needle == 0)
        return (haystack);
    while (*haystack)
    {
        i = 0;
        if (haystack[i] == needle[i])
        {
            do
            {
                if (needle[i + 1] == '\0')
                    return (haystack);
                i++;
            } while (haystack[i] == needle[i]);
        }
        haystack++;
    }
    return ('\0');
}
