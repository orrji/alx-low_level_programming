#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 * Return: pointer to allocated place in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1, i2, i3;
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
	if (i2 > n)
		i2 = n;
	c = malloc(sizeof(char) * (i1 + i2 + 1));
	if (c == NULL)
		return (NULL);
	for (i3 = 0; i3 < i1; i3++)
		c[i3] = s1[i3];
	for (i3 = 0; i3 < i2; i3++)
		c[i3 + i1] = s2[i3];
	c[i1 + i2] = '\0';
	return (c);
}
