#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of ints inits to 0
 * @width: width of array
 * @height: height of array
 * Return: a double pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int i1, i2;
	int **i3;

	if (width <= 0 || height <= 0)
		return (NULL);
	i3 = (int **)malloc(sizeof(int *) * height);
	if (i3 == NULL)
		return (NULL);
	for (i1 = 0; i1 < height; i1++)
	{
		i3[i1] = (int *)malloc(sizeof(int) * width);
		if (i3[i2] == NULL)
		{
			for (i2 = 0; i2 < i1; i2++)
				free(i3[i2]);
			free(i3);
			return (NULL);
		}
		for (i2 = 0; i2 < width; i2++)
		{
			i3[i1][i2] = 0;
		}
	}
	return (i3);
}
