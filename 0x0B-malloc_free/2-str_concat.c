#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to newly allocated space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i1, i2, i3, i4;
	char *c;

	if (s1 == NULL)
		i1 = 0;
	else
	{
		for (i1 = 0; s1[i1]; i1++)
			;
	}
	if (s2 == NULL)
		i2 = 0;
	else
	{
		for (i2 = 0; s2[i2]; i2++)
			;
	}
	i3 = i1 + i2 + 1;
	c = malloc(i3 * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i4 = 0; i4 < i1; i4++)
		c[i4] = s1[i4];
	for (i4 = 0; i4 < i2; i4++)
		c[i4 + i1] = s2[i4];
	c[i1 + i2] = '\0';
	return (c);
}
