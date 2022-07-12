#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array
 * @a: Array of integers
 * @n: No of elements of array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
