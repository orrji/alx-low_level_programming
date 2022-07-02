#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to print combination of single digits
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (a < b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
