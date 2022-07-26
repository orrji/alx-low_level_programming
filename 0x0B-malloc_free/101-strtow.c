#include "main.h"
#include <stdlib.h>

/**
 * wrdcnt - counts the number of words in a string
 * @s: string to count
 * Return: int of number of words
 */

int wrdcnt(char *s)
{
	int i1, i2 = 0;

	for (i1 = 0; s[i1]; i1++)
	{
		if (s[i1] == ' ')
		{
			if (s[i1 + 1] != ' ' && s[i1 + 1] != '\0')
				i2++;
		}
		else if (i1 == 0)
			i2++;
	}
	i2++;
	return (i2);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	int i1, i2, i3, i4, i5 = 0, wc = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	i5 = wrdcnt(str);
	if (i5 == 1)
		return (NULL);
	c = (char **)malloc(i5 * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[i5 - 1] = NULL;
	i1 = 0;
	while (str[i1])
	{
		if (str[i1] != ' ' && (i1 == 0 || str[i1 - 1] == ' '))
		{
			for (i2 = 1; str[i1 + i2] != ' ' && str[i1 + i2]; i2++)
				;
			i2++;
			c[wc] = (char *)malloc(i2 * sizeof(char));
			i2--;
			if (c[wc] == NULL)
			{
				for (i3 = 0; i3 < wc; i3++)
					free(c[i3]);
				free(c[i5 - 1]);
				free(c);
				return (NULL);
			}
			for (i4 = 0; i4 < i2; i4++)
				c[wc][i4] = str[i1 + i4];
			c[wc][i4] = '\0';
			wc++;
			i1 += i2;
		}
		else
			i1++;
	}
	return (c);
}
