#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar(a * b);
			_putchar(',');
			_putchar(' ');
		}
		if (b == 9)
		{
			_putchar('\n');
		}
	}
}
