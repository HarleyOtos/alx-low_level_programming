#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: is the destination of the memory
 * @src: is the source memory
 * @n: number of bytes
 * Return: string from src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
