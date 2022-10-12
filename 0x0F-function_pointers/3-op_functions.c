#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - a function adding sum
  * @a: a sum
  * @b: b sum
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - A function of difference of a and b
  * @a: a parameter
  * @b: b parameter
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul -  product of a and b
  * @a: a para
  * @b: b para
  *
  * Return:  product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - A fuction of division of a by b
  * @a: a para
  * @b: b para
  *
  * Return: result of the division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - A function of remainder of the division of a by b
  * @a: a para
  * @b: b para
  *
  * Return: remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
