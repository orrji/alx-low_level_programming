#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i1 = 0, i2, i3;

	for (i2 = 1; i2 < argc; i2++)
	{
		for (i3 = 0; argv[i2][i3]; i3++)
		{
			if (isdigit(argv[i2][i3]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i2 = 1; i2 < argc; i2++)
	{
		i1 += atoi(argv[i2]);
	}
	printf("%d\n", i1);
	return (0);
}
