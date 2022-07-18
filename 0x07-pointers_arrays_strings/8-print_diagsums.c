#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i1, i2, i3, i4 = 0, i5 = 0;

	for (i1 = 0; i1 < size; i1++)
	{
		i3 = (i1 * size) + i1;
		i4 += *(a + i3);
	}
	for (i2 = 0; i2 < size; i2++)
	{
		i3 = (i2 * size) + (size - 1 - i2);
		i5 += *(a + i3);
	}
	printf("%i, %i\n", i4, i5);
}
