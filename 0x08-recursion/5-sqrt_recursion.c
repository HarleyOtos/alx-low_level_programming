#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: the string
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - the recursive square root
 * @n: number string
 * @i:iterator
 * Return: number
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
