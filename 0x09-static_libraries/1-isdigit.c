#include "main.h"

/**
 * _isdigit - A function that check for a digit 0 through 9.
 * @c: character for testing
 * Return: Always 1 otherwise 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
