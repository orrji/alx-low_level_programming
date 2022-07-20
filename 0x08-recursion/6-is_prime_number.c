#include "main.h"

/**
 * prime_check - Checks if prime number
 * @f: Checks factor
 * @p: prime number check
 * Return: 1 or 0
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - States if a number is a prime number
 * @n: integer to check
 * Return: return 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
