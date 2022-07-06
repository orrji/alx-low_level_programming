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
			int pdt = a * b;

			if (pdt <= 9)
			{
				_putchar(pdt + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
					if (pdt < 9 || (a < 5 && b < 5))
					{
						_putchar(' ');
					}
				}
			}
			else
			{
				_putchar((pdt / 10) + '0');
				_putchar((pdt % 10) + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
