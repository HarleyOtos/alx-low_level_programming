#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: The pointer
 * @src: the source parameter
 * @n: The amount of bytes
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}

	return (dest);
}
