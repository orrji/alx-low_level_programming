#include "main.h"

/**
 * print_alphabet - print alphabet 10x
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int r;
	char c;

	for (r = 0; r <= 9; r++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
