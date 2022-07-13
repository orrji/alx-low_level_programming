#include "main.h"
#include <string.h>

/**
 * _strncpy - Copies a string
 * @dest: destination parameter
 * @src: source parameter
 * @n: integer parameter
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
