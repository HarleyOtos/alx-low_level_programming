#include "main.h"

/**
 * strcat - a function that concatenates two strings
 * @dest: The pointer
 * @src: the source parameter
 *
 * Return: dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
