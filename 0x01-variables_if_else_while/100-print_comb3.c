#include <stdio.h>

/**
 * main - Program to print combinations of two single digits
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
				putchar(a);
				putchar(b);
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
