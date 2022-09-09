#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
