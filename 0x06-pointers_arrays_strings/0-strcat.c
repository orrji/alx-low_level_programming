#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x1 = 0, x2;

	while (dest[x1])
		x1++;

	for (x2 = 0; src[x2] != 0; x2++)
	{
		dest[x1] = src[x2];
		x1 += 1;
	}
	dest[x1] = '\0';
	return (dest);
}
