#include "main.h"

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a', a <= 'z', a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}

