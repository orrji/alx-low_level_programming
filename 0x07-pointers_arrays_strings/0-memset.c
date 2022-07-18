#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: pointer parameter
 * @b: character parameter
 * @n: Integer parameter
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
