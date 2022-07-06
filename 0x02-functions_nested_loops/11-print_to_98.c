#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers to 98
 * @n: Integers
 * Return: Returns 0
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a < 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a > 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
