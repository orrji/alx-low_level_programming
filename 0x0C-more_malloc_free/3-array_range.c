#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min integer
 * @max: max integer
 * Return: pointer to new array or NULL
 */

int *array_range(int min, int max)
{
	int i1, i2;
	int *i3;

	if (min > max)
		return (NULL);
	i2 = max - min + 1;
	i3 = malloc(sizeof(int) * i2);
	if (i3 == NULL)
		return (NULL);
	for (i1 = 0; i1 < i2; i1++, min++)
	{
		i3[i1] = min;
	}
	return (i3);
}
