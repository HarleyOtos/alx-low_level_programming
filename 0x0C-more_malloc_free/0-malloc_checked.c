#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: bytes to be allocated
 * Return: A pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
