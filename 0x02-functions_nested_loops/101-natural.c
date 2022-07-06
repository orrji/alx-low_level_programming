#include <stdio.h>

/**
 * main - Prints and prints sum of multiples of 3 0r 5
 *
 * Return: Always 0
 */

int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 5) == 0 || (a % 3) == 0)
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}