#include "main.h"

/**
 * puts_half - Prints 2nd half of string
 * @str: string parameter
 * Return: void
 */

void puts_half(char *str)
{
	int a, b, c;

	a = strlen(str);
	if (a % 2 == 1)
	{
		b = a / 2 + 1;
	}
	else
	{
		b = a / 2;
	}
	for (c = b; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
