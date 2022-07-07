#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: An integer input
 * Return: Last digit
 */

int print_last_digit(int i)
{
	int a;

	if (i < 0)
	{
		a = -i % 10;
		_putchar(a + '0');
	}
	else
	{
		a = i % 10;
		_putchar(a + '0');
	}
	return (a % 10);
	_putchar('\n');
}
