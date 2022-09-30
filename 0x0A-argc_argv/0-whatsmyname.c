#include <stdio.h>

/**
 * main - A function that prints its own name
 * @argc: argc parameter
 * @argv: command array
 * Return: Always 0 success
 */
int main (int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
