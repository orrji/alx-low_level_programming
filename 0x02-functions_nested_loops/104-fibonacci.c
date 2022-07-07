#include <stdio.h>

/**
 * main - First 98 fibonacci numbers
 *
 * Return: Fib numbers
 */

int main(void)
{
	int i, nextTerm;

	int s1 = 1, s2 = 2;

	printf("%d, %d, ", s1, s2);
	for (i = 3; i <= 96; i++)
	{
		printf("%d, ", nextTerm);
		s1 = s2;
		s2 = nextTerm;
		nextTerm = s1 + s2;
	}
	return (0);
}
