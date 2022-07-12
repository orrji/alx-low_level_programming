#include "main.h"

/**
 * _strcpy - Copies string pointed
 * @dest: variable to be copied to
 * @src: variable to be copied from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';

	return (dest);
}
