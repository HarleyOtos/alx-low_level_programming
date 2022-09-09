#include <stdio.h>

/**
 * main - c script for lowercase alphabets
 *
 * Return: Always (success message)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
