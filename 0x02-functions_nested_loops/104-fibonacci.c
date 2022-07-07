#include <stdio.h>

/**
 * main - First 98 fibonacci numbers
 *
 * Return: Fib numbers
 */

int main(void)
{
	int s1 = 1, s2 = 2, n = 0;

	printf("%d, %d, ", s1, s2);
	n = s1 + s2;
	while (n <= 354224848179261915075)
	{
		printf("%d, ", n);
		s1 = s2;
		s2 = n;
		n = s1 + s2;
	}
	return (0);
}
