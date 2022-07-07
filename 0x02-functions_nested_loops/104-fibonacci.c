#include <stdio.h>

/**
 * main - First 98 fibonacci numbers
 *
 * Return: Fib numbers
 */

int main(void)
{
	int i;

	int s1 = 1, s2 = 2;

	int n = s1 + s2;

	printf("%d, %d, ", s1, s2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%d, ", n);
		s1 = s2;
		s2 = n;
		n = s1 + s2;
	}
	return (0);
}
