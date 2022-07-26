#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & inits with specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 * Return: Pointer to array or Null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c1;

	if (size == 0)
		return (NULL);
	c1 = malloc(size * sizeof(char));
	if (c1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		c1[i] = c;
	}
	return (c1);
}
