#include "main.h"

/**
 * factorial - Returns factorial of a given number
 * @n: integer to print factorial
 * Return: factorial or error depending on n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
