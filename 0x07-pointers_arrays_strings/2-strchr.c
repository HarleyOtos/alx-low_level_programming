#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: A given string
 * @c: another char
 * Return: success
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
