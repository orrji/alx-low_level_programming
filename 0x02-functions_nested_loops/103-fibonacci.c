#include <stdio.h>

/**
 * main - Sum Fibonacci Numbers less that 4000000
 *
 * Return: sum
 */

int main(void)
{
	long int i = 1, j = 2, k = 0, sum = 0;

	while (k <= 4000000)
	{
		k = i + j;
		i = j;
		j = k;
		if ((i % 2) == 0)
		{
		sum += i;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
