#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: string parameter
 * Return: void
 */

void puts2(char *str)
{
	int a, len;

	len = strlen(str);
	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
