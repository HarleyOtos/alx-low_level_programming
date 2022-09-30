#include "main.h"

/**
 * _islower - A function that check for lowercase function
 * @c: Is use to int the argument of the function
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
