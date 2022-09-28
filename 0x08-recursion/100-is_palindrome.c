#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int n, int i);
int is_palindrome(char *s);

/**
 * find_strlen - a function that returns 1 if a string is
 * a palindrome and 0 if not
 * @s: a string
 *
 * Return: The length of the string
 */
int find_strlen(char *s)
{
	int n = 0;

	if (*(s + n))
	{
		n++;
		n += find_strlen(s + n);
	}
	return (n);
}
