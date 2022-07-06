#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @i: An integer input
 * Return: Value of last digit
 */

int print_last_digit(int i)
{
	int a;

	if (i < 0)
	i = -i;
	a = i % 10
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
