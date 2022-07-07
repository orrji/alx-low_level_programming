#include <stdio.h>

/**
 * main - Sum Fibonacci Numbers less that 4000000
 *
 * Return: sum
 */

int main(void)
{
	int i = 1, j = 2, sum = 0;
	
	while (i < 4000000)
	{
		i = i + j;
		j = i - j;
	}
	if (i % 2 == 0)
	{
		sum+= i;
	}
	printf("%d\n", sum);
}
