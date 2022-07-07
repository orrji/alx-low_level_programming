#include <stdio.h>

/**
 * main - First 98 fibonacci numbers
 *
 * Return: Fib numbers
 */

int main(void)
{
	unsigned long int i;

	unsigned long int s1 = 1, s2 = 2;

	unsigned long int n = s1 + s2;

	printf("%lu, %lu, ", s1, s2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%lu, ", n);
		s1 = s2;
		s2 = n;
		n = s1 + s2;
	}
	return (0);
}
