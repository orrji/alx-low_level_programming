#include "main.h"

/**
 * _strlen_recursion - Counts length of a string
 * @s: string to check length
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
