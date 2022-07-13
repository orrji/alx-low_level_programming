#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * @n: byte parameter
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
