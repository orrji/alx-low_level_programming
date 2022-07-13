#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: array a
 * @n: element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *v1, v2, v3, v4;

	v1 = a;
	for (v2 = 0; v2 < n; v2++)
		v1++;
	for (v4 = 0; v4 < v2 / 2; v4++)
	{
		v3 = a[v4];
		a[v4] = *v1;
		*v1 = v3;
		v1--;
	}
}
