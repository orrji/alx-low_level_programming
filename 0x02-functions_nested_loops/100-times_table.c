#include "main.h"

/**
 * print_times_table - prints time table of number under 15
 * @n: integer input
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar('0');
			for (a = 1; a <= n; a++)
			{
				c = a * b;
				if (c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else if (c > 9 && c <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(c / 100 + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
