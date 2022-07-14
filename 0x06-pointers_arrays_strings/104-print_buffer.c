#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints buffer
 * @b: character input
 * @size: size integer
 * Return: buffer
 */

void print_buffer(char *b, int size)
{
	int i1, i2, i3;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i1 = 0; i1 < size; i1 += 10)
		{
			printf("%.8x:", i1);
			for (i2 = i1; i2 < i1 + 10; i2++)
			{
				if (i2 % 2 == 0)
					printf(" ");
				if (i2 < size)
					printf("%.2x", *(b + i2));
				else
					printf("  ")
			}
			printf(" ");
			for (i3 = i1; i3 < i1 + 10; i3++)
			{
				if (i3 >= size)
					break;
				if (*(b + i3) < 32 || *(b + i3) > 126)
					printf("%c", ',');
				else
					printf("%c", *(b + i3))
			}
			printf("\n");
		}
	}
}
