#include <stdio.h>

/**
 * main - printing of numbers
 *
 * Return: Always (0)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
		{
			putchar(i + '0');
			putchar(i + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
