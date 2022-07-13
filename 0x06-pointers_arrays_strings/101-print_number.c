#include "main.h"

/**
 * print_number - prints integers
 * @n: integer parameter
 * Return: integer
 */

void print_number(int n)
{
	int i0, i1, i2, i3, i4, i5, i6, i7, i8, i9;
	int j0, j1, j2, j3, j4, j5, j6, j7, j8;

	i0 = n / 1000000000;
	j0 = i0;
	i1 = (n / 100000000) % 10;
	j1 = j0 + i1;
	i2 = (n / 10000000) % 10;
	j2 = j1 + i2;
	i3 = (n / 1000000) % 10;
	j3 = j2 + i3;
	i4 = (n / 100000) % 10;
	j4 = j3 + i4;
	i5 = (n / 10000) % 10;
	j5 = j4 + i5;
	i6 = (n / 1000) % 10;
	j6 = j5 + i6;
	i7 = (n / 100) % 10;
	j7 = j6 + i7;
	i8 = (n / 10) % 10;
	j8 = j7 + i8;
	i9 = n % 10;
	if (n < 0)
	{
		_putchar('-');
		i0 *= -1;
		i1 *= -1;
		i2 *= -1;
		i3 *= -1;
		i4 *= -1;
		i5 *= -1;
		i6 *= -1;
		i7 *= -1;
		i8 *= -1;
		i9 *= -1;
	}
	if (j0 != 0)
		_putchar('0' + i0);
	if (j1 != 0)
		_putchar('0' + i1);
	if (j2 != 0)
		_putchar('0' + i2);
	if (j3 != 0)
		_putchar('0' + i3);
	if (j4 != 0)
		_putchar('0' + i4);
	if (j5 != 0)
		_putchar('0' + i5);
	if (j6 != 0)
		_putchar('0' + i6);
	if (j7 != 0)
		_putchar('0' + i7);
	if (j8 != 0)
		_putchar('0' + i8);
	_putchar('0' + i9);
}
