#include "main.h"

/**
 * print_sign - A function to print sign of number
 * @n: Is the int use for the argument of the function
 *
 * Return: Always (0) success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
