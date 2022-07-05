#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: An integer input
 * Return: Last digit
 */

int print_last_digit(int i)
{
	if (i >= 0)
	{
		return (i % 10);
	}
	else
	{
		return (-i % 10);
	}
}
