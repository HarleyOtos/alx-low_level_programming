#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be searched.
 * @accept: The measured prefix
 *
 * Return: bytes in initial segment of s consisting of accept
 */
unsigned int _strspn(char *s, char *accept)
{
<<<<<<< HEAD
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
=======
    unsigned int bytes = 0;
    int i;
    
    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                bytes++;
                break;
            }
            else if (accept[i + 1] == '\0')
                return (bytes);
        }
        s++;
    }
    return (bytes);
>>>>>>> 53eb7f05bd6f5ec7ad437734a918e890df2b3906
}
