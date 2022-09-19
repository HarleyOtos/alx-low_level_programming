#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse
 * @s: The reverse string
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
