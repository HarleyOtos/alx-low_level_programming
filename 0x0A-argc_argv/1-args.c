#include <stdio.h>
#include "main.h"

/**
 *
 * @argc:
 * @argv:
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
    (void) argv; /*Ignore argv*/
    printf("%i\n", argc - 1);
    return (0);
}
