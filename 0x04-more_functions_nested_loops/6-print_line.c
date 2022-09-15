#include <stdio.h>
#include "main.h"

/**
 * print_line - A function that prints a straight line
 * @n: used parameter
 * Return: Always 0
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
