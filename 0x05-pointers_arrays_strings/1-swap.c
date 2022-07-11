#include "main.h"

/**
 * swap_int - Swaps value of 2 integers
 * @a: Integer a
 * @b: Integer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int hld;

	hld = *a;
	*a = *b;
	*b = hld;
}
