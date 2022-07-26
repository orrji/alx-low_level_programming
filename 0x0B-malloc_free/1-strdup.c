#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: string to copy
 * Return: Pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i1, i2;
	char *c;

	if (str == NULL)
		return (NULL);
	for (i1 = 0; str[i1]; i1++)
		;
	i1++;
	c = malloc(i1 * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i2 = 0; i2 < i1; i2++)
	{
		c[i2] = str[i2];
	}
	return (c);
}
