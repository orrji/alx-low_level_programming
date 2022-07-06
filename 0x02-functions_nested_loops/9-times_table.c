#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
		for (a = 1; a < 10; a++)
		{
			c = a * b;
			if (c <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
