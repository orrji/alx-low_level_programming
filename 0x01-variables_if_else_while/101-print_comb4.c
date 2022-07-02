#include <stdio.h>

/**
 * main - Print combination of 3 digits
 *
 * Return: Always 0 (Success!)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			if (a < b)
			{
				for (c = 2; c <= 9; c++)
				{
					if (b < c)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(c + '0');
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
