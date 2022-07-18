#include "main.h"

/**
 * _strpbrk - Searches string for any set of bytes
 * @s: string to check
 * @accept: string to check against
 * Return: Pointer to byte s or null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i1, i2;

	for (i1 = 0; s[i1]; i1++)
	{
		for (i2 = 0; accept[i2]; i2++)
		{
			if (s[i1] == accept[i2])
				break;
		}
		if (accept[i2])
			return (s + i1);
	}
	return (0);
}
