#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: array a
 * @n: element of array
 */

void reverse_array(int *a, int n)
{
	int v1 = 0, v2;

	n = n - 1;
	while (v1 < n)
	{
		v2 = *(a + v1);
		*(a + v1) = *(a + n);
		*(a + n) = v2;
		v1++;
		n--;
	}
}
