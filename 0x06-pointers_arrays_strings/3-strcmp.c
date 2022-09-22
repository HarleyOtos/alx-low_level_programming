#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: If s1 and s2 are equal return 0 else another number
 */
int _strcmp(char *s1, char *s2)
{
	int i =, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
