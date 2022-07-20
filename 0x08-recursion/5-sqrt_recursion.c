#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @a: attempt sqrt
 * @c: number to calculate sqrt of
 * Return: square root of c or -1
 */

int sqrt_check(int a, int c)
{
	if (a * a == c)
	{
		return (a);
	}
	else if (a * a > c)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(a + 1, c));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to calculate sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0)
	}
	else
	{
		return (sqrt_check(1, n));
	}
}
