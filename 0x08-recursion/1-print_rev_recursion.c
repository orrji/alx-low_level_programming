#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print in reverse
 * Return: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
