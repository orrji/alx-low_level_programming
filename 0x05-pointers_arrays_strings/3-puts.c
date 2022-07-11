#include "main.h"

/**
 * _puts - Prints string followed by new line
 * @str: String parameter
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
