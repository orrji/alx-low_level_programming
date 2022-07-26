#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: double pointer to arguments
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int i1, i2, i3 = 0, i4 = 0;
	char *c;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
			i4++;
		i4++;
	}
	i4++;
	c = malloc(i4 * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2]; i2++)
		{
			c[i3] = av[i1][i2];
			i3++;
		}
		c[i3] = '\n';
		i3++;
	}
	c[i3] = '\0';
	return (c);
}
