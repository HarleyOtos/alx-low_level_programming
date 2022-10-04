#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * @size: the size of the array
 * @c: char an array initialized
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if  (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
