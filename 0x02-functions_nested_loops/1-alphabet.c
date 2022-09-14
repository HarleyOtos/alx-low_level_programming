#include "main.h"

/**
 * main - A script that print_alphabet, in lowercase, followed by a new line
 *
 * Return: always (0) success message
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
