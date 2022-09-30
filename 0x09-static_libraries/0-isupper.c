#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 * @c: tested character
 * Return: Always 1 or 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
