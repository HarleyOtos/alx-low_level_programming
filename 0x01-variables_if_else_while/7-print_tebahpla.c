#include <stdio.h>

/**
 * main - print alphabet in reverse e.g tebahpla
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
