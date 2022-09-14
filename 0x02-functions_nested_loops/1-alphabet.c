#include "main.h"

/**
 * print_alphabet - A script that print_alphabet
 *
 * Return: always success
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
