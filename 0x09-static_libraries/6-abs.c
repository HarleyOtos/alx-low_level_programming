#include "main.h"
#include <stdio.h>

/**
 * _abs - A function to computes absolute value of an integer
 * @c: Is the int that will be use for the argument of the function
 *
 * Return: Always (0)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
